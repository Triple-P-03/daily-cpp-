// panagram all the lowercase ltters in english language
#include <bits/stdc++.h>
using namespace std;

void panagram(string s)
{
    int alph[26] = {0};
    cout << s << endl;
    string a = s;
    for (int i = 0; i < a.length(); i++)
    {
        alph[a[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alph[i] == 0)
        {
            cout << "not panagram\n";
            return;
        }
    }
    cout << "panagram\n";
}
int main()
{
    panagram("abcdefghijklmnopqrstuvwxyz");
    panagram("abcdefghijklmnopqrs");
    return 0;
}