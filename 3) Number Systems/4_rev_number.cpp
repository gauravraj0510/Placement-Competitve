#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter a no: ";
    cin >> n;
    int rev = 0;
    int rem;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    cout << "The number in reverse: " << rev;
    return 0;
}

// Enter a no: 1234
// The number in reverse: 4321