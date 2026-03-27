#include <bits/stdc++.h>
using namespace std;
void arm(int a)
{
    int ans=0, copy = a, rem;
    while (copy >0)
    {
        rem = copy % 10;
        ans += (rem * rem * rem);
        copy /= 10;
    }
    if (ans == a)
    {
        cout << a<<"\tarmstrong\n";
    }
}

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        arm(i);
        
    }

    return 0;
}