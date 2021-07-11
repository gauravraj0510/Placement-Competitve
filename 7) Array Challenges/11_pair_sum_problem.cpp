// Check if any pair exists whose sum is a particular value.
// Brute force technique gives Time Comp = n^2
// If sorted array is present then pair can be found in Time Comp = n
// If unsoreted array is given, first sort and then follow this method,
// hence Time Comp = n + nlogn(for sorting)

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter array size(max 100): ";
    cin >> n;
    cout << "Enter array in ascending order: \n";
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter sum of pair: ";
    cin >> k;
    int start = 0, end = n - 1;
    bool pairFound = false;
    while (start < end)
    {
        int pairSum = arr[start] + arr[end];
        if (pairSum > k)
        {
            end--;
        }
        else if (pairSum < k)
        {
            start++;
        }
        else
        {
            pairFound = true;
            cout << "Pair elements at index: " << start << " & " << end << endl;
            start++;
            end--;
        }
    }

    if (!pairFound)
    {
        cout << "No such pair exists!";
    }

    return 0;
}

// Enter array size(max 100): 5
// Enter array in ascending order: 
// -2
// -1
// 0
// 1
// 2
// Enter sum of pair: 0
// Pair elements at index: 0 & 4
// Pair elements at index: 1 & 3