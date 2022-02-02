#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    // hananah

    int len = s.length(), j = len - 1, flag = 1;
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[j])
        {
            cout << "Not a palindrome!";
            flag = 0;
            break;
        }
        else
        {
            j--;
        }
    }

    if (flag)
        cout << "Is a palindrome!";

    return 0;
}