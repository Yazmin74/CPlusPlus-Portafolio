#include <iostream>
using namespace std;

int main() {
    // Population values and corresponding years
    int years[] = {1922, 1942, 1962, 1982, 2002, 2022};
    int populations[] = {2000, 5000, 6000, 9000, 14000, 17000};

    cout << "Prairieville Population Growth (Each * Represents 1000 People)" << endl;
    cout << "==============================================================" << endl;

    // Display the population bars
    for (int i = 0; i < 6; ++i) {
        cout << years[i] << " ";
        for (int j = 0; j < populations[i] / 1000; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
