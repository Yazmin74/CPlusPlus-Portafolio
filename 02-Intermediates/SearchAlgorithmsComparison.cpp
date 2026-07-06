#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// Linear search function

int linearSearch(int arr[], int size, int target) {
    int comparisons = 0;
    for (int i = 0; i < size; i++) {
        comparisons++;
        if (arr[i] == target) {
            return comparisons;  // Return the number of comparisons when the target is found
        }
    }
    return comparisons;  // Return the comparisons made if target is not found
}

//Binary search function

int binarySearch (int arr[], int size, int target) {
    int comparisons = 0;
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
    comparisons++;
    
    int mid = (left + right) / 2;
    
    if (arr[mid] == target) {
        return comparisons; // Return the number of comparisons when the target is found
    }
    else if (arr[mid] < target) {
        left = mid + 1;
    }
    else {
        right = mid - 1;
    }
}
return comparisons; // Return the comparisons made if target is not found
}
int main(){
    // Seed the random number generator
    srand(time(0));

    // Create an array of 1000 integers with random values between 0 and 999
    const int size = 1000;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
    }

    // Linear search test
    cout << "Linear Search" << endl;
    cout << "=============" << endl;
    int linearSearchComparisons = 0;
    for (int i = 1; i <= 10; i++) {
        int target = rand() % 1000;  // Generate random target value
        int comparisons = linearSearch(arr, size, target);
        cout << "   #" << i << "   " << target << endl;
        linearSearchComparisons += comparisons;
        cout << endl;
    }
    cout << "Average: " << linearSearchComparisons / 10 << endl;
    cout << endl;
    
// Binary Search

// Sort the array for binary search
    sort(arr, arr + size);

    // Binary search test
    cout << "Binary Search" << endl;
    cout << "=============" << endl;
    int binarySearchComparisons = 0;
    for (int i = 1; i <= 10; i++) {
        int target = rand() % 1000;  // Generate random target value
        int comparisons = binarySearch(arr, size, target);
        cout << "   #" << i << "   " << target << endl;
        binarySearchComparisons += comparisons;
        cout << endl;
    }
    cout << "Average: " << binarySearchComparisons / 10.0 << endl;

    return 0;
}

