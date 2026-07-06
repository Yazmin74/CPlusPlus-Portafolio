#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int target) {
    int comparisions = 0;
    for (int i = 0; i < sz; i++) {
        comparisions++;
        if (arr[i] == target) {
            return comparisions; // Return the index of the target if found
        }
    }
    return comparisions; // Return -1 if target is not found
}

int main () {
    const int size = 1000;
    int arr[size];
    srand(time(0));

    // Populate the array with random integers in the range [0, 999]
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000;
    }

    cout << "Linear Search\n============\n";

    int totalComparisonsLinear = 0;
    // Perform Linear Search 10 times with random targets
    for (int i = 0; i < 10; i++) {
        int target = rand() % 1000;
        int comparisons = linearSearch(arr, size, 555);
        totalComparisonsLinear += comparisons;
        cout << "  #" << (i + 1) << "\n      " << comparisons << "\n";
    }
    cout << "Average\t      " << (totalComparisonsLinear / 10) << "\n";

    return 0;
}
