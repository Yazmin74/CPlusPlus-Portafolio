#include <iostream>
using namespace std;

int main () {
   int size;
   cout << "Enter the size of the array: " ;
   cin >> size;
   
   int* arr = new int[size]; // Allocate the memory for an array of integers
   
   // Assing values to the array elements
   for (int i = 0; i < size; ++i) {
       arr[i] = i + 1;
   }
   
   // Display the array elements
   cout << "Array elements: ";
   for (int i = 0; i < size; ++i) {
       cout << arr[i] << " ";
   }
   cout << endl;
   
   delete[] arr; // Deallocate the memory
     
    return 0;
}
