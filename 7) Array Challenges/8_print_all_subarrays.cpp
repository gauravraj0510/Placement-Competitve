#include <iostream>
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
    cout << "Subarrays are: \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << "\t";
            }
            cout << "\n";
        }
    }
    return 0;
}

// Enter array size(max 100): 5
// -1
// 4
// 2
// 0
// -3
// Subarrays are: 
// -1
// -1  4
// -1  4   2
// -1  4   2   0
// -1  4   2   0   -3
// 4
// 4   2
// 4   2   0
// 4   2   0   -3
// 2
// 2   0
// 2   0   -3
// 0
// 0   -3
// -3