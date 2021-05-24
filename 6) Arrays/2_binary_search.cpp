#include <iostream>
using namespace std;

int binSearch(int a[], int n, int key)
{
    int low = 0;
    int high = n;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter array size(max 50): ";
    cin >> n;
    int a[50];
    cout << "Enter array elements in ascending order: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter key to be searched: ";
    cin >> key;
    int res = binSearch(a, n, key);
    if (key == -1)
    {
        cout << "Element not found!";
    }
    else
    {
        cout << "Element found at index " << res;
    }
    return 0;
}

// Enter array size(max 50): 5
// Enter array elements in ascending order: 
// 10
// 20
// 30
// 40
// 50
// Enter key to be searched: 40
// Element found at index 3