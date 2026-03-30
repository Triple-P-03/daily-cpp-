#include <bits/stdc++.h>
using namespace std;

void findSecondMin(int a[], int n) {
    int minVal = INT_MAX;
    int secMinVal = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < secMinVal && a[i] > minVal) {
            secMinVal = a[i];
        }
    }

    if (secMinVal == INT_MAX) {
        cout << "No second minimum found." << endl;
    } else {
        cout << "Minimum: " << minVal << endl;
        cout << "Second Minimum: " << secMinVal << endl;
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 90};
    int n = sizeof(a) / sizeof(a[0]);
    findSecondMin(a, n);

    return 0;
}