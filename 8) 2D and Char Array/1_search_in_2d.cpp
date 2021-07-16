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
    cout << "\nEnter element to be searched for: ";
    cin >> key;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                cout << "\nElement found at (row,col):"
                     << "(" << i << "," << j << ")";
                return 0;
            }
        }
    }

    cout << "\nElement not found!";
    return 0;
}

// Enter no of rows and col(max 10 each): 2
// 3

// Enter array elements: 
// 1
// 4
// 2
// 5
// 3
// 6

// Array: 
// 1  4  2  
// 5  3  6  

// Enter element to be searched for: 4

// Element found at (row,col):(0,1)