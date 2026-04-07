#include <bits/stdc++.h>
using namespace std;
void ana(string s1, string s2)
{
    int flag = 0, count = 0;
    if (s1.length() == s2.length())
    {
        for (int i = 0; i < s1.length(); i++)
        {
            for (int j = 0; j < s2.length(); j++)
            {
                if (s1[i] == s2[j])
                {
                    count++;
                }
            }
        }
        if (count != s1.length())
        {
            flag = 1;
        }
    }
    else
    {
        flag = 1;
    }

    cout << ((flag == 0) ? "anagram" : "not anagram");
}
int main()
{
    /*
    Check if the given two Strings are Anagrams of each other

    Given two non-empty strings s1 and s2 of lowercase letters, determine if they
      are anagrams – i.e., if they contain the same characters with the same
      frequencies.
    */
    string s1 = "cat", s2 = "aac";
    ana(s1, s2);
    return 0;
}