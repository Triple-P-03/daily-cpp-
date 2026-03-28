#include <bits/stdc++.h>
using namespace std;
void tab(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << "\t*\t" << i <<"=\t"<< n * i<<endl;
    }
}
int main()
{
    int n = 10;
    tab(n);
    return 0;
}