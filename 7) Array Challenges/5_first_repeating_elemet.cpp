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
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT16_MAX;
    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] == -1)
        {
            idx[arr[i]] = i;
        }
        else
        {
            if (idx[arr[i]] < minidx)
            {
                minidx = idx[arr[i]];
            }
        }
    }
    if (minidx == INT16_MAX)
    {
        cout << "No repeating elment found!";
    }
    else
    {
        cout << "The first repating element is at index (starting from 0): " << minidx;
    }

    return 0;
}

// Enter array size (max 10): 5
// 0 
// 1
// 5
// 5
// 3
// The first repating element is at index (starting from 0): 2