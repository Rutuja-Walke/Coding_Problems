#include <bits/stdc++.h>
using namespace std;

int result(int *v, int n)
{
    int i = 0;
    if (n == 0)
        return 0;

    for (int j = 1; j < n; j++)
    {
        if (v[j] != v[i])
        {
            i++;
            v[i] = v[j];
        }
    }

    return i + 1;
}

int main()
{
    int v[] = {10, 10, 20, 30, 10, 20, 40, 50, 40, 100, 100};

    int len = sizeof(v) / sizeof(v[0]);
    sort(v, v + len);
    int n = result(v, len);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}