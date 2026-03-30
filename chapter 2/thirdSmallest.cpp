#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

void third(int *a, int n) {
    // 1. Check if array is too small
    if (n < 3) {
        cout << "No third smallest element exists.\n";
        return; // Stop execution here
    }

    // 2. Initialize the "podium" to infinity
    int first = INT_MAX;
    int second = INT_MAX;
    int third = INT_MAX;

    // 3. Single pass through the array
    for (int i = 0; i < n; i++) {
        // If current element is smaller than first, shift everything down
        if (a[i] < first) {
            third = second;
            second = first;
            first = a[i];
        } 
        // If it's between first and second (and not a duplicate of first)
        else if (a[i] < second && a[i] != first) {
            third = second;
            second = a[i];
        } 
        // If it's between second and third (and not a duplicate of second)
        else if (a[i] < third && a[i] != second && a[i] != first) {
            third = a[i];
        }
    }

    // 4. Final check: Did we actually find a third distinct smallest?
    if (third == INT_MAX) {
        cout << "No third distinct smallest element exists.\n";
    } else {
        cout << "The third smallest element is: " << third << "\n";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Calculate size here in main!
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    third(arr, n);
    
    return 0;
}