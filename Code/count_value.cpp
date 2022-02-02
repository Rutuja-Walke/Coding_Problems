#include <bits/stdc++.h>
using namespace std;

// Input
// array elements: 10, 10, 20, 30, 10, 20
// Output:
// 10: 3
// 20: 2
// 30: 1

int main()
{
    vector<int> v{10, 10, 20, 30, 10, 20};
    map<int, int> mp;

    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }

    cout << " \nResult: \n";

    for (auto i : mp)
    {
        cout << i.first << ": " << i.second << endl;
    }

    return 0;
}