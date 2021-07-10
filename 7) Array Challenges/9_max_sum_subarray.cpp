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
    int cumsum[101];
    for (int i = 1; i <= n; i++)
    {
        cumsum[i] = cumsum[i - 1] + arr[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cumsum[i] - cumsum[j];
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }

    cout << "Max Sum: " << maxSum;

    return 0;
}

// Enter array size(max 100): 5
// 1
// -4
// 3
// 2
// -1
// Max Sum: 5