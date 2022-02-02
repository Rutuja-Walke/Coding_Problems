#include <bits/stdc++.h>
using namespace std;

bool is_jolly_jumper(vector<int> &arr, int n)
{
    int s1 = 0, s2 = 0;

    s1 = ((n + 1) * n) / 2;

    for (int i = 1; i <= n; i++)
    {
        int t = abs(arr[i] - arr[i - 1]);
        // cout << "\n i: " << t;
        s2 += t;
    }

    // cout << s2 << s1 << "\n";

    if (s1 == s2)
        return true;
    else
        return false;
}

int main()
{
    vector<int> arr;
    int n; // n -> number of elements
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }

    if (is_jolly_jumper(arr, n - 1))
    {
        cout << "Sequence is Jolly Jumper!";
    }

    else
    {
        cout << "Sequence is not a Jolly Jumper!";
    }

    return 0;
}