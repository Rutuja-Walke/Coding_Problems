#include <bits/stdc++.h>
using namespace std;

void snake_case(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            s[i] = '_';
        else
            s[i] = tolower(s[i]);
    }

    cout << "\nsnake_case: " << s;
}

void camelCase(string s)
{
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            res += toupper(s[i + 1]);
            i++;
        }
        else
        {
            res += s[i];
        }
    }

    cout << "\ncamelCase: " << res;
}

void PascalCase(string s)
{
    string res;
    res += toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            res += toupper(s[i + 1]);
            i++;
        }
        else
        {
            res += s[i];
        }
    }

    cout << "\nPascalCase: " << res;
}

int main()
{
    string s = "user login count";

    snake_case(s);
    camelCase(s);
    PascalCase(s);
    return 0;
}