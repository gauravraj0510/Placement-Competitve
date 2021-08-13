#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr + n); // sort the array to get the
                        // corner cases ans.
    int minEle,
        maxEle;                       // these 2 variables will hold the
                                      // between elements max and min value
    int result = arr[n - 1] - arr[0]; // current result when arr[0]
                                      // iss min and arr[n-1] is max
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] >= k && arr[n - 1] >= k)
        {
            maxEle = max(arr[i] + k, arr[n - 1] - k);
            minEle = min(arr[0] + k, arr[i + 1] - k);
            result = min(result, maxEle - minEle);
        }
    }
    return result;
}

int main()
{
    int n, k;
    cin >> k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.getMinDiff(arr, n, k);
    cout << ans << "\n";
    return 0;
}