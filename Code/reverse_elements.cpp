#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = n - 1;

    for (int i = 0; i < n / 2; i++)
    {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        j--;
    }

    cout << "Printing reverse array: \n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}