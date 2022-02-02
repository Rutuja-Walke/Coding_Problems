#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{10, 10, 20, 30, 10};
    // 10, 10, 20, 30, 10
    // element to find occurrence: 10
    int n = 10;
    int count = 0;

    for (auto x : v)
    {
        if (x == n)
            count++;
    }

    cout << " Number of occurrences: " << count << endl;

    return 0;
}