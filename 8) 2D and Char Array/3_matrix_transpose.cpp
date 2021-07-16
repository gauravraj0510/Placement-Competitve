#include <iostream>
using namespace std;

int main()
{
    int row, col, key;
    cout << "Enter no of rows or col(max 10 each): ";
    cin >> row ;
    col = row;
    int arr[10][10];
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nTranspose matrix:\n";
    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < col; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}

// Enter no of rows or col(max 10 each): 3

// Enter array elements: 
// 1 2 3
// 4 5 6 
// 7 8 9 

// Transpose matrix:
// 1  4  7  
// 2  5  8  
// 3  6  9 