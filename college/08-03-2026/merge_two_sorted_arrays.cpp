// https://www.geeksforgeeks.org/dsa/merge-two-sorted-arrays/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void mergeArrays(vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    // temporary array to store all elements
    // from arr1 and arr2
    vector<int> merged(n + m);

    // copy elements from arr1 and arr2 into merged array
    for (int i = 0; i < n; ++i)
    {
        merged[i] = arr1[i];
    }
    for (int j = 0; j < m; ++j)
    {
        merged[n + j] = arr2[j];
    }

    // dort the merged array
    sort(merged.begin(), merged.end());

    // distribute first n elements to arr1
    for (int i = 0; i < n; ++i)
    {
        arr1[i] = merged[i];
    }

    // distribute remaining m elements to arr2
    for (int j = 0; j < m; ++j)
    {
        arr2[j] = merged[n + j];
    }
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    mergeArrays(arr1, arr2);

    for (int num : arr1)
    {
        cout << num << ' ';
    }
    cout << endl;

    for (int num : arr2)
    {
        cout << num << ' ';
    }
    cout << endl;

    return 0;
}