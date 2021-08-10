#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size(max 100): ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxSum = INT_MIN;
    int maxNo = INT_MIN;
    // Brute force approach Time Comp = n^3
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int sum = 0;
    //         for (int k = i; k <= j; k++)
    //         {
    //             sum = sum + arr[k];
    //         }
    //         if (sum > maxSum)
    //         {
    //             maxSum = sum;
    //         }
    //     }
    // }

    //Cumulative sum approach Time Comp = n^2
    // int cumsum[101];
    // for (int i = 1; i <= n; i++)
    // {
    //     cumsum[i] = cumsum[i - 1] + arr[i - 1];
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         sum = cumsum[i] - cumsum[j];
    //         if (sum > maxSum)
    //         {
    //             maxSum = sum;
    //         }
    //     }
    // }

    //Kadane's Algorithm Approach Time Comp = n ;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
        currsum = currsum + arr[i];
        if (currsum < 0)
        {
            currsum = 0;
        }
        if (currsum > maxSum)
        {
            maxSum = currsum;
        }
    }
    if (maxNo < 0)
    {
        cout << "Max Sum: " << maxNo;
    }
    else
    {
        cout << "Max Sum: " << maxSum;
    }

    return 0;
}

// Enter array size(max 100): 5
// 1
// -4
// 3
// 2
// -1
// Max Sum: 5