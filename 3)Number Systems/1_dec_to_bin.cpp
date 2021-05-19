#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a decimal no: ";
    cin >> n;
    int rem;
    int bin = 0;
    int i = 1;

    while (n > 0)
    {
        rem = n % 2;
        bin = bin + rem * i;
        i = i * 10;
        n = n / 2;
    }

    cout << "Binary no is " << bin;

    return 0;
}

// Enter a decimal no: 118
// Binary no is 1110110 