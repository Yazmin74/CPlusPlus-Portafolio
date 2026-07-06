#include <iostream>
using namespace std;

/*int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index of the target if found
        }
    }
    return -1; // Return -1 if target is not found
} */

int linearSearch (int arr[], int size, int target) {
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i]) {
            return i;
        }
    }
    return -1;
}

int main () {
    int a[] = {15, 23, 7, 45, 87, 16};
    
    int userValue;
    
    cout << "Enter an integer: " << endl;
    cin >> userValue;
    
    int result = linearSearch(a, 6, userValue);
    
    if (result >= 0) {
        cout << "The number " << a[result] << " was found at the element with index " << result << endl;
    }
    else {
        cout << "The Number " << userValue << " was not found." << endl;
    }
}
