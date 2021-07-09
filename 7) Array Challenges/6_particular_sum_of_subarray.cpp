#include <iostream>
using namespace std;

int main()
{
    int n, sumSub;
    cout << "Enter array size (max 10): ";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter sum of subarray: ";
    cin >> sumSub;
    int i = 0, j = 0, currSum = 0;

    while (j < n && (arr[j] + currSum <= sumSub))
    {
        currSum = currSum + arr[j];
        j++;
    }
    // Now currSumm is either equal to sumSub or greater than sumSub
    if (currSum == sumSub)
    {
        cout << "\nStart: " << i;
        cout << "\nEnd: " << j - 1;
        return 0;
    }

    while (j < n)
    {
        currSum = currSum + arr[j];
        while (currSum > sumSub)
        {
            currSum = currSum - arr[i];
            i++;
        }
        if (currSum == sumSub)
        {
            cout << "\nStart: " << i;
            cout << "\nEnd: " << j ;
            return 0;
        }
        j++;
    }

    cout<<"\nNo subarray found with sum = "<<sumSub;

    return 0;
}

// Enter array size (max 10): 5
// 1
// 2
// 3
// 7
// 5
// Enter sum of subarray: 12

// Start: 1
// End: 3