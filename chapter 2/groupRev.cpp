#include <iostream>
#include <algorithm> // for std::min
using namespace std;

void rev(int* a, int n, int k) {
    // Jump forward by 'k' to process one chunk at a time
    for (int i = 0; i < n; i += k) {
        int left = i;
        
        // Calculate the right boundary of the current chunk.
        // We use min() to ensure we don't go out of bounds if the 
        // final group has fewer than 'k' elements left.
        int right = min(i + k - 1, n - 1);

        // Standard reversal logic for the current chunk using Two Pointers
        while (left < right) {
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
            
            left++;
            right--;
        }
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 4;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    rev(a, n, k);

    cout << "Reversed in groups of " << k << ": ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}