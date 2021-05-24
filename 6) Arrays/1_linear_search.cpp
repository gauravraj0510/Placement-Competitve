#include <iostream>
using namespace std;

int linSearch(int a[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
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
    cout << "Enter array elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "Enter key to be searched: ";
    cin >> key;
    int res = linSearch(a, n, key);
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
// Enter array elements: 
// 78
// 56
// 12
// 49
// 37
// Enter key to be searched: 12
// Element found at index 2