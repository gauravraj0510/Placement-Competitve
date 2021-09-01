/*https://codeforces.com/problemset/problem/110/A*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    int n = input.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (input[i] == '4' || input[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

// 7747774
// YES