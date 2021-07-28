#include <iostream>
#include <climits>
using namespace std;

void sort012(int a[], int n)
{
    int b[n];
    int start = 0, end = n - 1, count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            b[start] = a[i];
            start++;
        }
        else if (a[i] == 2)
        {
            b[end] = a[i];
            end--;
        }
        else
        {
            count1++;
        }
    }
    for (int i = start; i <= end; i++)
    {
        b[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
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
    sort012(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "   ";
    }
    return 0;
}

// Enter size: 5
// Enter array:- 
// 0 2 1 2 0
// 0   0   1   2   2