#include <iostream>
#include <cmath>
using namespace std;

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int combination(int n, int r)
{
    int ans;
    ans = fact(n) / (fact(n - r) * fact(r));
    return ans;
}

int main()
{

    int rows;
    cout << "Enter rows in Pascal's Triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

// Enter rows in Pascal's Triangle: 5
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 