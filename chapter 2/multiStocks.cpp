#include <iostream>
#include <algorithm>

using namespace std;

int stocks(int *a, int n) {
    int totalProfit = 0;

    // Start from the second day (index 1)
    for (int i = 1; i < n; i++) {
        // If the price today is higher than yesterday, 
        // "buy" yesterday and "sell" today.
        if (a[i] > a[i - 1]) {
            totalProfit += (a[i] - a[i - 1]);
        }
    }
    
    return totalProfit;
}

int main() {
    int price[] = {100, 180, 260, 310, 40, 535, 695 };
    int n = sizeof(price) / sizeof(price[0]);
    
    cout << "The max possible profit is " << stocks(price, n);

    return 0;
}