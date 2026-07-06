#include <iostream>
using namespace std;

int main () {
    int hours_traveled, speed, distance = 0;
    
//Prompt for the user to get the speed of the vehicle (mph)
    while (true) {
        try {
            cout << "What is the speed of the vehicle in mph? ";
            cin >> speed;
            if (speed < 0) {
                cout << "Error: Speed must be greater than or equal to 0." << endl;
            } else {
                break;
            }
        }catch (const exception& e) {
            cout << "Error: Please enter a valid numeric value for speed." << endl;
            cin.clear();
            cin.ignore(1200, '\n');
        }
    }
    
// Prompt for the user to get the number of hours the vehicle has hours_traveled
    while (true) {
        try {
            cout << "How many hours has it traveled? ";
            cin >> hours_traveled;
            if (hours_traveled < 1) {
                cout << "Error: Hours traveled must be greater than or equal to 1." << endl;
            } else {
                break;
            }
        }catch (const exception& e) {
            cout << "Error: Please enter a valid integer value for hours traveled." << endl;
            cin.clear ();
            cin.ignore(1200, '\n');
        }
    }
//Calculate and display the distance traveled
    cout << "Hours Distance Traveled" << endl;
    cout << "==============================" << endl;
    for (int i = 1; i <= hours_traveled; ++i) {
        distance += speed;
        cout << i << "           " << distance << endl;
}

return 0;
}
