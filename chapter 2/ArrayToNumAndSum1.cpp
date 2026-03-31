// #include <bits/stdc++.h>
// using namespace std;
// int arr(int *a, int n)
// {
//     int num = 0, sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         num = num * 10 + a[i];
//     }
//     return num + 1;
// }

// int main()
// {

//     int a[] = {1, 2, 3, 4, 5};
//     int n = sizeof(a) / sizeof(a[0]);

//     cout << "the required ans is :\t" << arr(a, n);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
void arr(int* a, int n)//this approach is way simpler than my appproach of making an int variable 
{
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < 9)
        {
            a[i] = a[i] + 1;
            break;
        }
        else
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }
}

int main()
{
    // simpler approach
    int a[] = {1, 2, 3, 4, 5, 6}, n = sizeof(a) / sizeof(a[0]);
    arr(a, n);
    return 0;
}