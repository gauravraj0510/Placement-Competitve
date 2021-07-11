// Total 2 cases to be handled 
// Case 1: no wrapping required i.e. circular property not reqd for getting max sum (same as normal max sum)
// Case 2: wrapping required 

// Algorith for Case 2:
// Max sum = Total sum - Sum of Non Wrapping/Contributing Nos
// Steps to find sum of non contributing nos:
// 1) Reverse sign of each element of array
// 2) Apply kadane's algo to negated array and the answer will be negative of sum of non contributing nos
// 3) Final max sum in circular array = totalSum + kadaneSum[=(-Sum of Non Contributing Nos)]

// For input array calculate maxSum using both cases and the maximum of two will be answer

#include <iostream>
#include <climits>
using namespace std;

int kadane(int a[], int n)
{
    int maxSum = INT_MIN, currSum = 0;
    for (int i = 0; i < n; i++)
    {
        currSum = currSum + a[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
    }
    return maxSum;
}

int main()
{
    int n;
    cout << "Enter array size (max 100): ";
    cin >> n;
    int arr[100], neg[100];
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum = totalSum + arr[i];
        neg[i] = arr[i] * -1;
    }
    int wrapSum = totalSum + kadane(neg, n);
    int noWrapSum = kadane(arr, n);
    if (wrapSum > noWrapSum)
    {
        cout << "Max sum in circular subarray: " << wrapSum;
    }
    else
    {
        cout << "Max sum in circular subarray: " << noWrapSum;
    }
    return 0;
}