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

    int max = arr[0];

    cout << "Max till ith element: ";
    cout << arr[0] << "\t";
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        cout << max << "\t";
    }
    return 0;
}

// Enter array size (max 10): 5
// 4
// 1
// 8
// 9
// 5
// Max till ith element: 4   4   8   9   9