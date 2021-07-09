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
    const int N = 1e6 + 2;
    bool idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            idx[arr[i]] = true;
        }
    }

    int ans = 0;
    while (idx[ans] == true)
    {
        ans++;
    }
    cout << "Smallest positive no missing is: " << ans;

    return 0;
}

// Enter array size (max 10): 6
// 0
// -9
// 1
// 3
// -4
// 5
// Smallest positive no missing is: 2