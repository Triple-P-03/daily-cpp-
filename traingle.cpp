#include <bits/stdc++.h>
using namespace std;
void pat(int a)
{
    for (int i = 1; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
int main()
{
    pat(5);

    return 0;
}