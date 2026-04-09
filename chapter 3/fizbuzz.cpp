#include <bits/stdc++.h>
using namespace std;
void buzzer(int n)
{
    for (int i = 1; i < n; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
        {
            cout << i << "\tfizzbuzz\n";
        }
        else if (i % 3==0)
        {
            cout << i << "\tfizz\n";
        }
        else if (i % 5==0)
        {
            cout << i << "\tbuzz\n";
        }

        else
        {
            cout << to_string(i) << "\n";
        }
    }
}
int main()
{
    /**
     * Fizz Buzz Logic:
     * Given an integer n, for every positive integer i <= n:
     * - Print "FizzBuzz" if i is divisible by 3 and 5.
     * - Print "Fizz" if i is divisible by 3.
     * - Print "Buzz" if i is divisible by 5.
     * - Print i as a string if none of the above are true.
     */
    int n = 90;
    buzzer(n);
    return 0;
}