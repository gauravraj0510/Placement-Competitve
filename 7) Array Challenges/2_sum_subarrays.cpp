#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size (max 10): ";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        cout << "\nSum of subarrays starting at " << i << ":";
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout << "   " << sum;
        }
    }

    return 0;
}

// Enter array size (max 10): 5
// 1
// 2
// 3
// 4
// 5

// Sum of subarrays starting at 0:   1   3   6   10   15
// Sum of subarrays starting at 1:   2   5   9   14
// Sum of subarrays starting at 2:   3   7   12
// Sum of subarrays starting at 3:   4   9
// Sum of subarrays starting at 4:   5