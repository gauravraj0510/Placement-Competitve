#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter a binary no: ";
    cin >> n;
    int rem;
    int dec = 0;
    int i = 0;

    while (n > 0)
    {
        rem = n % 10;
        dec = dec + rem * pow(2, i);
        i = i + 1;
        n = n / 10;
    }

    cout << "Decimal no is " << dec;

    return 0;
}

// Enter a binary no: 1110110
// Decimal no is 118