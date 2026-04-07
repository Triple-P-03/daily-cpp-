#include <bits/stdc++.h>
using namespace std;
int main()
{
    string m = "racecar";
    int n = m.size(), count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (m[i] == m[j])
            {
                count++;
                break;
            }
        }
        if (count == 1)
        {
            cout << m[i];
            break;
        }
        
    }

    return 0;
}