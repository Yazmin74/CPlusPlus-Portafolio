#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    
    //define the temperatures values
    double celsius_values[] = {-40.0, 0.0, 100.0};
    
    //display the header
    cout << "Temperatures From Celsius To Fahrenheit" << endl;
    cout << "=======================================" << endl;
    cout << setw(6) <<"Celsius" << setw(10) << "   Fahrenheit" << endl;
    
    //Apply the Formula F = (9/5)C + 32
    for (double celsius : celsius_values) {
        double fahrenheit = (9.0/5.0)* celsius + 32.0;
        cout << fixed << setprecision (1);
        cout << setw(6) << celsius << " C" << setw(10) << fahrenheit << " F" << endl;
    }
    return 0; //Exit succesfully
} // Main
