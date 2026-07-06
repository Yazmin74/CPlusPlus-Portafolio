#include <iostream>
using namespace std;
    
    // Create a function
    void swapValues (int* ptr1, int* ptr2) {
        int temp = *ptr1; // Store the value in the first variables
        *ptr1 = *ptr2;
        *ptr2 = temp;
        
    }
    
int main()
{ 
 // Declare the variables
    int num1 = 115;
    int num2 = 25;
    
    cout << "Before swap: " << endl;
    cout << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl;
    
    //Call the swapValues function
    
    swapValues(&num1, &num2);
    
    cout << "After swap: " << endl;
    cout << "Number 1 = " << num1 << endl;
    cout << "Number 2 = " << num2 << endl;
    
    return 0;
    
}
