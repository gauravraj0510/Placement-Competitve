#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout << "Enter n1, n2, n3 (n1 X n2) & (n2 x n3) matrices (Max 10): ";
    cin >> n1 >> n2 >> n3;
    int a[10][10], b[10][10], ans[10][10];
    cout << "\nEnter array 1: \n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "\nEnter array 2: \n";
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "\nAnswer array: \n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
            }
            cout << ans[i][j] << "    ";
        }
        cout << endl;
    }
    return 0;
}

// Enter n1, n2, n3 (n1 X n2) & (n2 x n3) matrices (Max 10): 3 4 3

// Enter array 1: 
// 8 4 1 2
// 8 4 3 6 
// 1 7 9 5

// Enter array 2: 
// 1 2 3 
// 4 5 6 
// 7 8 9 
// 4 5 6

// Answer array: 
// 39    54    69    
// 69    90    111    
// 112    134    156  