#include <iostream>
using namespace std;

void euclidGCD(int a, int b)
{
    while (a % b > 0)
    {
        int mod;
        mod = a % b;
        a = b;
        b = mod;
    }
    cout << b << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    euclidGCD(a, b);
    return 0;
}

// 42 24
// 6