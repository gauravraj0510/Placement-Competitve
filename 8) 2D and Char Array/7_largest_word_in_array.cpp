#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char a[100];
    cin.getline(a, n);
    cin.ignore();

    int maxNo = INT_MIN;
    int curr = 0, i = 0;
    int st = 0, maxSt = 0;

    while (1)
    {

        if (a[i] == ' ' || a[i] == '\0')
        {
            if (curr > maxNo)
            {
                maxNo = curr;
                maxSt = st;
            }
            st = i + 1;
            curr = 0;
        }
        else
        {
            curr++;
        }
        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << "Longest word: " << maxNo << endl;
    for (int i = 0; i < maxNo; i++)
    {
        cout << a[maxSt + i];
    }

    return 0;
}

// 12
// do or dying

// Longest word: 5
// dying