/*https://codeforces.com/problemset/problem/275/A*/

#include <iostream>
using namespace std;

int toggle(int a)
{
    if (a == 0)
    {
        a = 1;
    }
    else if (a == 1)
    {
        a = 0;
    }
    return a;
}

int main()
{

    int arr[5][5];
    int init[5][5] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            cin >> arr[i][j];
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if (arr[i][j] % 2 != 0)
            {
                init[i][j] = toggle(init[i][j]);
                init[i][j+1] = toggle(init[i][j+1]);
                init[i][j-1] = toggle(init[i][j-1]);
                init[i+1][j] = toggle(init[i+1][j]);
                init[i-1][j] = toggle(init[i-1][j]);
            }
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
            cout << init[i][j];
        cout << endl;
    }

    return 0;
}

// 1 0 1
// 8 8 8
// 2 0 3
// 010
// 011
// 100