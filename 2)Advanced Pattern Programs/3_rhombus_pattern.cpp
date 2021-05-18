#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space + n; j++)
        {
            if (j <= space)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << "\n";
    }

    return 0;
}

// Enter n:5
//     *****
//    *****
//   *****
//  *****
// *****