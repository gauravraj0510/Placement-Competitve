#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr[n + 1];
    int i = 0;
    cin >> arr;
    while (arr[i] != 0)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            cout << "Not a palindrome";
            return 0;
        }
        i++;
    }

    cout << "Palindrome";
    return 0;
}

// 5 
// nitin
// Palindrome

// 7
// asdfghj
// Not a palindrome