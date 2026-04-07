#include <bits/stdc++.h>
using namespace std;
int main()
{
    string m = "cat";
    int n = m.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(m[i], m[n - i - 1]);
    }
    cout << m;

    return 0;
}