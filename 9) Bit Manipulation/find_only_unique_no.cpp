#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int xorsum = 0;
    for(int i=0; i<n; i++)
    {
        xorsum = xorsum^arr[i];
    }
    cout<<xorsum;
    return 0;
}

// 7
// 1 2 3 4 1 2 3
// 4
