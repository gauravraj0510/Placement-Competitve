// You have n ruppee
// 1 ruppee = 1 chocolate
// 3 wrappers = 1 chocolate
// How many chocaltes possible with n ruppees?

#include <iostream>
using namespace std;

int main()
{
    int n, chocolates = 0, wrap_rem = 0;
    cout << "Enter amount: ";
    cin >> n;
    while (n > 0)
    {
        chocolates = chocolates + n;
        wrap_rem = wrap_rem + n % 3;
        chocolates = chocolates + wrap_rem / 3;
        n = n / 3;
    }
    cout << "Total chocolates possible: " << chocolates;
    return 0;
}