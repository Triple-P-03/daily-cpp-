#include <bits/stdc++.h>
using namespace std;
void enders(int *a, int n)
{
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            a[p] = a[i];
            p++;
        }
    }
    while (p < n)
    {
        a[p] = 1;
        p++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

int main()
{
    int a[]={1,22,3,4,1,5};
    int n=sizeof(a)/sizeof(a[0]);
    enders(a,n);

    return 0;
}