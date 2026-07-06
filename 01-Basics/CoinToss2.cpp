#include <iostream>
#include <cstdlib> // for srand and rand
#include <ctime> // for time

using namespace std;

int main ()
{ 
    //random number generator
    srand(time(nullptr));
    
    // Prompt the user to enter how many coin toss
    int numTosses;
    cout << "Enter the number of tosses to perfom: ";
    cin >> numTosses;
    
    //perform the coin tosses
    for (int i = 0; i < numTosses; ++i) {
        //Generate a random number (0 or 1)
        int result = rand () %2;
        
        // display "Heads" or "Tails"
    if (result == 0) {
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
   }
    
  return 0;
}
