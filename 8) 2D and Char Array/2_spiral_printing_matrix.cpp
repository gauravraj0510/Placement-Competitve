#include <iostream>
using namespace std;

int main()
{
    int row, col, key;
    cout << "Enter no of rows and col(max 10 each): ";
    cin >> row >> col;
    int arr[10][10];
    cout << "\nEnter array elements: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nArray: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    

    cout << "\nSpiral output of Array:\n";    
    int row_start = 0, row_end = row - 1, col_start = 0, col_end = col - 1;
    while (row_start <= row_end && col_start <= col_end)
    {
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << "  ";
        }
        row_start++;

        if (row_start <= row_end && col_start <= col_end)
        {
            for (int i = row_start; i <= row_end; i++)
            {
                cout << arr[i][col_end] << "  ";
            }
        }
        col_end--;

        if (row_start <= row_end && col_start <= col_end)
        {

            for (int i = col_end; i >= col_start; i--)
            {
                cout << arr[row_end][i] << "  ";
            }
        }
        row_end--;

        if (row_start <= row_end && col_start <= col_end)
        {
            for (int i = row_end; i >= row_start; i--)
            {
                cout << arr[i][col_start] << "  ";
            }
        }
        col_start++;
    }

    return 0;
}

// Enter no of rows and col(max 10 each): 3
// 4

// Enter array elements: 
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10
// 11

// Array: 
// 0  1  2  3  
// 4  5  6  7  
// 8  9  10  11  

// Spiral output of Array:
// 0  1  2  3  7  11  10  9  8  4  5  6  