#include <bits/stdc++.h>
using namespace std;
void prod(int *a, int n)
{

    int prod = a[0]*a[1];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            prod = max(prod, a[i] * a[j]);
        }
    }
    cout << "the max product is : " << prod;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, -6};
    int n = sizeof(a) / sizeof(a[0]);
    prod(a, n);

    return 0;
}