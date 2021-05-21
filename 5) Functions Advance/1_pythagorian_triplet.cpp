#include <iostream>
#include <cmath>
using namespace std;
#define max(a, b) (((a) > (b)) ? (a) : (b))

bool check(int x, int y, int z)
{
    int a, b, c;
    a = max(x, max(y, z));
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else if (a == z)
    {
        b = y;
        c = x;
    }

    if (a * a == b * b + c * c)
        return true;

    else
        return false;
}

int main()
{
    int x, y, z;
    cout << "Enter any 3 nos: \n";
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "Pythagorean Triplet";
    }
    else
    {
        cout << "Not a pythagorean Triplet";
    }
}

// Enter any 3 nos: 
// 3
// 5
// 4
// Pythagorean Triplet