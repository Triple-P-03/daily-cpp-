#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int prod = 1;
    for (int i = 1; i <= n; i++)
    {
        prod = i * prod;
    }
    return prod;
}
int main()
{
    cout << "enter a number";
    int n;
    cin >> n;
    cout<<"the factorial is :"<<fact(n);

    return 0;
}