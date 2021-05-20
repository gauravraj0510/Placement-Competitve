#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter rows:";
    cin >> row;
    cout << "Enter columns:";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}

// Enter rows:5
// Enter columns:4
// ****
// ****
// ****
// ****
// ****