#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            cout << "*\t";
        }
        cout<<"\n";
    }

    return 0;
}