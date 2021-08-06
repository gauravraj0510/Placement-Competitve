// https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
// Move all negative numbers to beginning and positive to end with constant extra space
// An array contains both positive and negative numbers in random order. Rearrange the 
// array elements so that all negative numbers appear before all positive numbers.

// Examples : 

// Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
// Output: -12 -13 -5 -7 -3 -6 11 6 5
// Note: Order of elements is not important here.

#include <iostream>
#include <climits>
using namespace std;

void arrangeNegAtStart(int a[], int n)
{
    int start = 0, end = n - 1;
    while (start <= end)
    {
        if (a[start] < 0)
        {
            start++;
        }
        else
        {
            if (a[end] < 0)
            {
                int temp = a[start];
                a[start] = a[end];
                a[end] = temp;
                end--;
                start++;
            }
            else
            {
                end--;
            }
        }
    }
}

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
    arrangeNegAtStart(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }
    return 0;
}

// Enter size: 10
// Enter array:- 
// 1 -2 3 -4 5 -6 7 -8 9 0
// -8   -2   -6   -4   5   3   7   1   9   0