#include <iostream>
using namespace std;

/*int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid potential overflow

        if (arr[mid] == target) {
            return mid; // Return the index of the target if found
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Return -1 if target is not found
}*/
int binarySearch (int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    int mid;
    while (left <= right) {
    mid = (left + right) / 2;
    
    if (target == arr[mid]) {
        return mid;
    }
    else if (target > arr[mid]) {
        left = mid + 1;
    }
    else {
        right = mid - 1;
    }
}
return -1;
}

int main()
{
    int a[] = {12, 22, 34, 47, 55, 67, 82, 98};
    
    int userValue;
    
    cout << "Enter an integer: " << endl;
    cin >> userValue;
    
    int result = binarySearch(a, 8, userValue);
    
    if (result >= 0) {
        cout << "The number " << a[result] << " was found at the element with index " << result << endl;
    }
    else {
        cout << "The Number " << userValue << " was not found." << endl;
    }
}
