#include <iostream>
#include <fstream>
#include <iomanip> // For formatting output

using namespace std;

int main() {
    ifstream inputFile("temps.txt");
    double celsius, fahrenheit;

    if (!inputFile.is_open()) {
        cerr << "Error opening temps.txt. Make sure the file exists." << endl;
        return 1;
    }

    cout << fixed << setprecision(1); // Set output format to one decimal place

    while (inputFile >> celsius) {
        if (celsius == -999) {
            break; // Exit loop when -999 is encountered
        }

        fahrenheit = (9.0 / 5.0) * celsius + 32.0;
        cout << celsius << " Celsius equals " << fahrenheit << " Fahrenheit" << endl;
    }

    inputFile.close();
    return 0;
}
