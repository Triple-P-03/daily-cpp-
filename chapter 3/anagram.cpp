/*
  Check if the given two Strings are Anagrams of each other

  Given two non-empty strings s1 and s2 of lowercase letters, determine if they
    are anagrams – i.e., if they contain the same characters with the same
    frequencies.
  */

#include <bits/stdc++.h>
using namespace std;
string sorat(string s)
{
    int n1 = s.length();
    for (int i = 0; i < n1 - 1; i++)
    {
        for (int j = i + 1; j < n1; j++)
        {
            if (s[i] > s[j])
            {
                swap(s[i], s[j]);
            }
        }
    }
    return s;
}
void anagram(string s1, string s2)
{
    int n1 = s1.length(), n2 = s2.length();
    if (n1 != n2)
    {
        cout << "not an anagram\n";
        return;
    }
    string a1 = sorat(s1), a2 = sorat(s2);
    for (int i = 0; i < n1; i++)
    {
        if (a1[i] != a2[i])
        {
            cout << "not anagram";
            return;
        }
    }

    cout << " anagram";
}
int main()
{
    string s1 = "tac", s2 = "cct";
    anagram(s1, s2);

    return 0;
}