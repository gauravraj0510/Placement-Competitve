// https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1#
// Time Comp=O(nlogn) because of sorting

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cout<<"Enter size: ";
    cin >> n;
    int a[n], b[n] ;
    cout<<"Enter array:- \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    cout<<"Enter k for kth smallest element: ";
    cin >> k;
    sort(b, b+n);
    int ans = b[k-1];
    cout<<"Kth smallest element: "<<ans<<endl;
    return 0;
}

// Enter size: 6            
// Enter array:- 
// 7 20 14 53 5 6
// Enter k for kth smallest element: 3
// Kth smallest element: 7