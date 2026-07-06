#include <iostream>
#include <cstdlib> // for srand and rand
#include <ctime> // for time

using namespace std;

int main ()
{ 
    //random number generator
    srand(time(nullptr));
    
    //Generate random number 
    int result = rand () %2;
    
    // display "Heads" or "Tails"
    if (result == 0) {
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
    
    return 0;
}
