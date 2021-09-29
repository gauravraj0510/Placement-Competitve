#include <iostream>
using namespace std;

void primeSeive(int n)
{
    int prime[100] = {0};
    for(int i=2; i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j = i*i; j<=n; j=j+i)
                prime[j] = 1;
        }
    }
    for(int i=2; i<=n;i++)
    {
        if(prime[i]==0)
            cout<<i<<" ";
    }

}

int main()
{
    int n;
    cin>>n;
    primeSeive(n);
    return 0;
}

// 30
// 2 3 5 7 11 13 17 19 23 29