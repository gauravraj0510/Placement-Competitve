#include <iostream>
#include <cmath>
using namespace std;

int Reverse(int n)
{
    int reverse = 0;
    while (n > 0)
    {
        int last = n % 10;
        reverse = reverse * 10 + last;
        n /= 10;
    }
    return reverse;
}

int addBinary(int a, int b)
{
    int answer = 0;
    int prev_carry = 0;

    int length_number = 0; //For calculating Max of Length of two binary number...

    while (a > 0 && b > 0) //Continue till both numbers' digits are traversed...
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            answer = answer * 10 + prev_carry;
            prev_carry = 0;
        }
        else if ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1))
        {
            if (prev_carry == 1)
            {
                answer = answer * 10 + 0;
                prev_carry = 1;
            }
            else
            {
                answer = answer * 10 + 1;
                prev_carry = 0;
            }
        }
        else
        {
            answer = answer * 10 + prev_carry;
            prev_carry = 1;
        }
        a /= 10;
        b /= 10;
        length_number++;
    }

    while (a > 0)
    {
        if (prev_carry == 1)
        {
            if (a % 2 == 0)
            {
                answer = answer * 10 + 1;
                prev_carry = 0;
            }
            else
            {
                answer = answer * 10 + 0;
                prev_carry = 1;
            }
        }
        else
        {
            if (a % 2 == 0)
            {
                answer = answer * 10 + 0;
            }
            else
            {
                answer = answer * 10 + 1;
            }
            prev_carry = 0;
        }
        a /= 10;

        length_number++;
    }

    while (b > 0)
    {
        if (prev_carry == 1)
        {
            if (b % 2 == 0)
            {
                answer = answer * 10 + 1;
                prev_carry = 0;
            }
            else
            {
                answer = answer * 10 + 0;
                prev_carry = 1;
            }
        }
        else
        {
            if (b % 2 == 0)
            {
                answer = answer * 10 + 0;
            }
            else
            {
                answer = answer * 10 + 1;
            }
            prev_carry = 0;
        }
        b /= 10;

        length_number++;
    }

    if (prev_carry == 1)
    {
        answer = answer * 10 + 1;
        length_number++;
    }

    answer = Reverse(answer);

    int temp_answer = answer, answer_length = 0; //For calculating length of answer (binary)...

    while (temp_answer > 0)
    {
        temp_answer /= 10;
        answer_length++;
    }

    while (answer_length != length_number)
    {
        answer = answer * 10;
        answer_length++;
    }

    return answer;
}

int main()
{
    cout << "Enter 2 binary numbers: \n";
    int x, y;
    cin >> x >> y;
    cout << "The addition is: " << addBinary(x, y);
    return 0;
}

// Enter 2 binary numbers: 
// 11001101
// 110000110100
// The addition is: 1000010110