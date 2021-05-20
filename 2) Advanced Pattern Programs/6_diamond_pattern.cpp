#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << "* ";
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}

// Enter n:5
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 