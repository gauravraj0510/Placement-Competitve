#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int a[n];
    cout << "Enter array:- \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, a[i]);
        minNo = min(minNo, a[i]);
    }
    cout << "Max: " << maxNo << endl;
    cout << "Min: " << minNo << endl;
    return 0;
}

// Enter size: 8
// Enter array:-
// 7 2 3 6 8 5 9 1
// Max: 9
// Min: 1