#include <iostream>
using namespace std;

int main () {
    int arr[] = {10, 20, 30, 40, 50, 60, 70 }; //Declare an array of integers
    int* ptr = arr; // Assign the pointer to the start of the array
    
    // Iterate throug the array using the pointer
    
    for (int i = 0; i < 7; i++) {
        cout << "Value at array [" << i << "]: " << *(ptr + i) << endl;
    }
    return 0;
}
