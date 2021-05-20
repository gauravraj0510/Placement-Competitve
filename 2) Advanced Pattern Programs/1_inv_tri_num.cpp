#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}

// Enter n:5
// 12345
// 1234
// 123
// 12
// 1