#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool check;
    check = n&(n-1);
    if(check)
    {
        cout<<"Not power of 2";
    } 
    else{
        cout<<"Power of 2";
    }
    return 0;
}

// 16
// Power of 2