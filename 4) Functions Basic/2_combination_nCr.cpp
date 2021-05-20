#include <iostream>
#include <cmath>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int main()
{

    int n, r;
    cout << "Calculate nCr = n!/((n-r)! * r!)) " << endl;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    int ans = fact(n) / (fact(n - r) * fact(r));

    cout << "The ans is :" << ans;

    return 0;
}

// Calculate nCr = n!/((n-r)! * r!)) 
// Enter n: 4
// Enter r: 2
// The ans is :6