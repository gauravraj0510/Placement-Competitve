#include <iostream>
using namespace std;

int main()
{

    int n, row = 3;
    cout << "Enter no of Zig-Zag lines :";
    cin >> n;
    int col = 2 * n + 1;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1)
            {
                if (j % 4 != 3)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            if (i == 2)
            {
                if (j % 2 != 0)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
            if (i == 3)
            {
                if (j % 4 != 1)
                {
                    cout << "  ";
                }
                else
                {
                    cout << "* ";
                }
            }
        }
        cout<<"\n";
    }

    return 0;
}

// Enter no of Zig-Zag lines :5
//     *       *       * 
//   *   *   *   *   *   
// *       *       *    