
#include <bits/stdc++.h>
using namespace std;
void prime(int a)
{
    for (int i = 2; i * i <=a; i++)
    {
        if (a % i == 0)
        {
            return;
        }
    }
    cout << a<<endl;
}
int main()
{
    for (int i = 2; i < 1000; i++)
    {
        prime(i);
    }

    return 0;
}