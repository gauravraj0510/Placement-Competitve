#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a no: ";
    cin >> n;
    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            cout << n << " is not a prime number";
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " is a prime number";
    }

    return 0;
}