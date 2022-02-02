#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    // Was it a cat I saw?

    int len = str.length(), flag = 1;

    string s;
    for (int i = 0; i < len; i++)
    {
        char ch = tolower(str[i]);
        if (ch == ' ' || isdigit(ch))
            continue;

        if (isalpha(ch))
            s += ch;
    }

    // cout << s << "\n";

    int j = s.length() - 1;

    for (int i = 0; i < (s.length()) / 2; i++)
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