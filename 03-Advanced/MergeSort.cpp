#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <numeric> // For accumulate

using namespace std;

// Global variable to count key comparisons
long long keyComparisons = 0;

// Function to merge two halves of an array
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    // Copy data to temporary arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the two halves back into the original array
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        keyComparisons++; // Increment key comparison count
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements of L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy any remaining elements of R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive Merge Sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid); // Sort the left half of the array
        mergeSort(arr, mid + 1, right); // Sort the right half of the array

        merge(arr, left, mid, right); // Merge 2 sorted arrays
    }
}

// Function to print an array
void printArray(const vector<int>& arr) {
    for (int val : arr)
        cout << val << " ";
    cout << endl;
}

int main() {
    srand(time(0)); // Seed the random number generator
    vector<long long> comparisonCounts;

    for (int run = 1; run <= 10; run++) {
        vector<int> arr(100);
        for (int i = 0; i < 100; i++) {
            arr[i] = rand() % 1000 + 1; // Generate random numbers from 1 to 1000
        }

        keyComparisons = 0; // Reset key comparison count for each run
        mergeSort(arr, 0, arr.size() - 1);

        cout << "#" << run << "    " << keyComparisons << endl;
        comparisonCounts.push_back(keyComparisons);
    }

    // Calculate average key comparisons
    double averageComparisons = accumulate(comparisonCounts.begin(), comparisonCounts.end(), 0.0) / comparisonCounts.size();

    cout << "  " << endl;
    cout << "Average" << "   " << averageComparisons << endl;

    return 0;
}
