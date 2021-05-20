#include <iostream>
#include <cmath>
using namespace std;

void primeRange(int n)
{
    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " is a prime number" << endl;
    }
}

int main()
{

    int up, low;
    cout << "Enter lower limit: ";
    cin >> low;
    cout << "Enter upper limit: ";
    cin >> up;

    for (int i = low; i <= up; i++)
    {
        primeRange(i);
    }

    return 0;
}

// Enter lower limit: 5
// Enter upper limit: 20
// 5 is a prime number
// 7 is a prime number
// 11 is a prime number
// 13 is a prime number
// 17 is a prime number
// 19 is a prime number