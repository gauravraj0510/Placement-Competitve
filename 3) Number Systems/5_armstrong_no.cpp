#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int num, originalNum, remainder, length = 0, result = 0;
    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0)
    {
        originalNum /= 10;
        ++length;
    }
    originalNum = num;

    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result = result + pow(remainder, length);
        originalNum = originalNum / 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";
    return 0;
}

// Enter an integer: 1634
// 1634 is an Armstrong number

// Enter an integer: 258
// 258 is not an Armstrong number