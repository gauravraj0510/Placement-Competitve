// Searching in Time Comp = n 

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
    cout << "\nEnter element to be searched for: ";
    cin >> key;
    int r = 0, c = col - 1;
    while (r < row && col >= 0)
    {
        if (arr[r][c] == key)
        {
            cout << "Element at index: " << r << "  " << c;
            return 0;
        }
        else if (arr[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    cout << "\nNot found!";
    return 0;
}

// Enter no of rows and col(max 10 each): 3 3

// Enter array elements: 
// 1 2 3
// 4 5 6
// 7 8 9

// Enter element to be searched for: 5
// Element at index: 1  1