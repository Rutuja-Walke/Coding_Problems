#include <bits/stdc++.h>
using namespace std;

void merge_array(int arr1[], int arr2[], int res[], int s1, int s2)
{
    int i = 0, j = s2 - 1, k = 0;

    while (i < s1 && j >= 0)
    {
        if (arr1[i] < arr2[j])
        {
            res[k] = arr1[i];
            k++;
            i++;
        }

        else
        {
            res[k] = arr2[j];
            k++;
            j--;
        }
    }

    while (i < s1)
    {
        res[k] = arr1[i];
        k++;
        i++;
    }

    while (j >= 0)
    {
        res[k] = arr2[j];
        k++;
        j--;
    }
}

int main()
{
    int arr1[] = {10, 15, 20, 35};
    int arr2[] = {40, 34, 25, 5, 2};

    // output--> 2 5 10 15 25 20 34 35 40
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int res[n1 + n2];

    merge_array(arr1, arr2, res, n1, n2);

    cout << "Array after merging: " << endl;
    for (int i = 0; i < n1 + n2; i++)
        cout << res[i] << " ";

    return 0;
}