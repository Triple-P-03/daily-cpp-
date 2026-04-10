// #include <bits/stdc++.h>
// using namespace std;
// void itself(int *a, int n)
// {
//     int res[n];
//     for (int i = 0; i < n; i++)
//     {
//         res[i] = 1;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i != j)
//             {
//                 res[i] *= a[j];
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << res[i] << "\t";
//     }
// }
// int main()
// {
//     /*
//     Product of Array Except Self

//         Given an array arr[] of n integers, construct a product array res[] (of
//         the same size) such that res[i] is equal to the product of all the
//         elements of arr[] except arr[i].

//     */
//     int arr[] = {1, 2, 3, 4}, n = sizeof(arr) / sizeof(arr[0]);
//     itself(arr, n);

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void it(int *a, int n)
{
    int res[n], multi = 1;
    for (int i = 0; i < n; i++)
    {
        multi *= a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            res[i] = multi / a[i];
        }
        else
        {
            res[i] = -1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << "\t";
    }
}

int main()
{

    /*
    Product of Array Except Self

        Given an array arr[] of n integers, construct a product array res[] (of
        the same size) such that res[i] is equal to the product of all the
        elements of arr[] except arr[i].

    */
    int arr[4] = {1, 2, 3, 4};
    it(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}