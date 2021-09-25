/*https://codeforces.com/problemset/problem/80/A*/

#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int m, n;
    cin >> m >> n;
    int count = 0;
    if (isPrime(m) && isPrime(n) && m < n)
    {
        for (int i = m + 1; i < n; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
        if (count == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

//  3 5
//  YES