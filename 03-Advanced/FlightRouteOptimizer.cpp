#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <map>
#include <algorithm>
#include <climits>

using namespace std;

struct Flight {
    string destinationCode;
    int price;
};

struct Airport {
    string code;
    string location;
    string phoneNumber;
    vector<Flight> connections;
};

void findRoutes(map<string, Airport>& airports, string from, string to, vector<string> currentRoute, int stops, vector<vector<string>>& routes) {
    if (stops > 2) {
        return;
    }

    currentRoute.push_back(from);

    if (from == to) {
        routes.push_back(currentRoute);
        return;
    }

    for (const auto& flight : airports[from].connections) {
        string nextAirport = flight.destinationCode;
        if (find(currentRoute.begin(), currentRoute.end(), nextAirport) == currentRoute.end()) {
            findRoutes(airports, nextAirport, to, currentRoute, stops + 1, routes);
        }
    }
}

int main() {
    map<string, Airport> airports;

    // Load airports.txt
    ifstream airportsFile("airports.txt");
    if (airportsFile.is_open()) {
        string line;
        while (getline(airportsFile, line)) {
            stringstream ss(line);
            Airport airport;
            getline(ss, airport.code, ',');
            getline(ss, airport.location, ',');
            getline(ss, airport.phoneNumber, ',');
            airports[airport.code] = airport;
        }
        airportsFile.close();
    } else {
        cerr << "Error: Could not open airports.txt" << endl;
        return 1;
    }

    // Load flights.txt
    ifstream flightsFile("flights.txt");
    if (flightsFile.is_open()) {
        string line;
        while (getline(flightsFile, line)) {
            stringstream ss(line);
            string departure, destination;
            int price;
            getline(ss, departure, ',');
            ss >> price;
            ss.ignore();
            getline(ss, destination, ',');

            Flight flight;
            flight.destinationCode = destination;
            flight.price = price;

            airports[departure].connections.push_back(flight);
        }
        flightsFile.close();
    } else {
        cerr << "Error: Could not open flights.txt" << endl;
        return 1;
    }

    // Query loop
    string input;
    while (true) {
        cout << "Enter an airport symbol (e.g. LGA) or FROM-TO (e.g. LGA-ICN) or 'Stop' to exit: ";
        cin >> input;

        if (input == "Stop") {
            break;
        }

        size_t dashPos = input.find('-');
        if (dashPos != string::npos) {
            string from = input.substr(0, dashPos);
            string to = input.substr(dashPos + 1);

            if (airports.find(from) != airports.end() && airports.find(to) != airports.end()) {
                vector<vector<string>> routes;
                vector<string> currentRoute;
                findRoutes(airports, from, to, currentRoute, 0, routes);

                // Step 1: Calculate total prices and group by stops
                map<int, vector<pair<vector<string>, int>>> routesByStops;

                for (const auto& route : routes) {
                    int totalPrice = 0;
                    bool valid = true;
                    for (size_t i = 0; i < route.size() - 1; ++i) {
                        string src = route[i];
                        string dst = route[i + 1];
                        bool found = false;

                        for (const auto& flight : airports[src].connections) {
                            if (flight.destinationCode == dst) {
                                totalPrice += flight.price;
                                found = true;
                                break;
                            }
                        }

                        if (!found) {
                            valid = false;
                            break;
                        }
                    }

                    if (valid) {
                        int stops = route.size() - 2;
                        routesByStops[stops].push_back({route, totalPrice});
                    }
                }

                // Step 2: Filter inefficient longer routes
                map<int, vector<pair<vector<string>, int>>> optimizedRoutes;
                int minPrices[3] = {INT_MAX, INT_MAX, INT_MAX};

                for (int stops = 0; stops <= 2; ++stops) {
                    if (routesByStops.find(stops) == routesByStops.end()) continue;

                    for (const auto& [route, price] : routesByStops[stops]) {
                        bool isEfficient = true;
                        for (int prev = 0; prev < stops; ++prev) {
                            if (minPrices[prev] <= price) {
                                isEfficient = false;
                                break;
                            }
                        }
                        if (isEfficient) {
                            optimizedRoutes[stops].push_back({route, price});
                            if (price < minPrices[stops]) {
                                minPrices[stops] = price;
                            }
                        }
                    }
                }

                // Output
                for (int stops = 0; stops <= 2; ++stops) {
                    if (optimizedRoutes.find(stops) != optimizedRoutes.end()) {
                        cout << stops << " stop" << (stops == 1 ? "" : "s") << ": " << endl;
                        for (const auto& [route, price] : optimizedRoutes[stops]) {
                            for (size_t i = 0; i < route.size(); ++i) {
                                cout << route[i];
                                if (i < route.size() - 1) cout << "-";
                            }
                            cout << "    $" << price << endl;
                        }
                        cout << endl;
                    }
                }
            } else {
                cout << "Invalid airport." << endl;
            }
        } else if (airports.find(input) != airports.end()) {
            cout << "Directly connected airports: ";
            for (const auto& flight : airports[input].connections) {
                cout << flight.destinationCode << " ";
            }
            cout << endl;
        } else {
            cout << "Airport not found." << endl;
        }
    }

    return 0;
}
