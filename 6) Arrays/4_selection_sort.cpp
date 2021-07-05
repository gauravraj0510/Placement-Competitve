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
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    cout << "\nSorted array(Selection):\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Enter array size (max 10): 5
// 8
// 7
// 1
// 4
// 3

// Sorted array(Bubble):
// 1 3 4 7 8 