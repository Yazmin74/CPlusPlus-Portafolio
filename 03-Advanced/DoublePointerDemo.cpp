#include <iostream>
using namespace std;

int main () {
    int num = 10; //Declare an integer variable
    int* ptr = &num; // Declare a pointer to an integer
    int** ptr2 = &ptr; // Declare a pointer to a pointer
    
// Display the value of address of 'num'
   cout << "Value of num: " << num << endl;
   cout << "Address of num: " << &num << endl;
   
// Display the value and address stored in the pointer
   cout << "Value stored in the pointer (address of num): " << ptr << endl;
   cout << "Value pointed to by ptr: " << *ptr << endl;
   
//Display the value and address stored in the pointer to pointer
   cout << "Value stored in ptr2 (address of ptr): "<< ptr2 << endl;
   cout << "Value pointed to by ptr2: " << **ptr2 << endl;
   
   return 0;
}
