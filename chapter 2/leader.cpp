#include <bits/stdc++.h>
using namespace std;
void leader(int *a, int n)
{
    int b[n] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                b[i] = 1;
                break;
            }
        }
        
    }
    cout << "leader:\n";
        for (int i = 0; i < n; i++)
        {
            if (b[i] != 1)
            {
                cout << a[i] << "\t";
            }
        }
}

int main()
{
    int a[] = {10, 3, 4, 1, 9, 2}, n = sizeof(a) / sizeof(a[0]);
    leader(a, n);
    return 0;
}