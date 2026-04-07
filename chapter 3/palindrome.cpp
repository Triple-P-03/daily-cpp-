#include <bits/stdc++.h>
using namespace std;
int main()
{
    string m = "racecar";
    int flag = 0, n = m.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (m[i] != m[n - i - 1])
        {
            flag = 1;
        }
    }
    cout << ((flag == 0) ? "palindrome" : "not palindrome");

    return 0;
}