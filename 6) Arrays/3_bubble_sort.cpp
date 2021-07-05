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

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "\nSorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Enter array size (max 10): 5
// 9
// 5
// 7
// 2
// 3

// Sorted array:
// 2 3 5 7 9