// #include <bits/stdc++.h>
// using namespace std;
// void catcher(int *a, int n)
// {
//     int count = 0, miss[n] = {0}, duplicate;
//     // duplicate
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] == a[j])
//             {
//                 duplicate = a[i];
//                 break;
//             }
//         }
//     }
//     cout << "duplicate :" << duplicate << endl;

//     // missing
//     for (int i = 1; i < n; i++)
//     {
//         miss[a[i]] = 1;
//     }
//     for (int i = 1; i < n; i++)
//     {
//         if (miss[i] == 0)
//         {
//             cout << "\nmissing\t:" << a[i];
//         }    
//     }
// }
// int main()
// {
//     int a[] = {4, 3, 6, 2, 1, 1};
//     catcher(a, sizeof(a) / sizeof(a[0]));

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void catcher(int* a,int n){
    int freq[n+1]={0},dup=-1,sum=0;
    for (int i = 0; i < n; i++)
    {
        freq[a[i]]++;
        sum+=a[i];
    }
    for ( int i = 0; i < n; i++)
    {
        if (freq[a[i]]>1)
        {
            dup=a[i];
        }
      
        
    }
    miss= (n*(n-1)/2)-sum+dup;
    cout<<"miss:"<<miss<<"\ndup\t"<<dup;
    
    
}
int main()
{
    int a[] = {4, 3, 6, 2, 1, 1};
    catcher(a, sizeof(a) / sizeof(a[0]));

    return 0;
}