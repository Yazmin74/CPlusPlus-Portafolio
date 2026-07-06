#include <iostream>
using namespace std;

int main () {
    int num = 10;  // Declare a n integer variable
    int* ptr = &num; // Declare a pointer to an integer and assign it the address of 'num'
    
    // Display the value and address of 'num'
    cout << "Value of num: " << num << endl;
    cout << "Value of the address of num: " << &num << endl;
    
    // Modify the value of 'num' using the pointer
    *ptr = 20;
    cout << "Value of num after modification: " << num << endl;
    
    return 0;
}
