/*https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#*/

#include <iostream>
#include <limits>
using namespace std;

int minJumps(int arr[], int n)
{
    int jump = 1, maxR = arr[0], steps = arr[0];
    //If only one element it is already at end so jump is 0
    if (n == 1)
        return 0;

    //If first element is 0 it will never be able to jump ahead
    else if (arr[0] == 0)
        return -1;

    else
    {
        for (int i = 1; i < n; i++)
        {
            //When last index is reached, return the ans as jump
            if (i == n - 1)
                return jump;

            //From the current index the range till where we can jump at max
            maxR = max(maxR, i + arr[i]);

            //Decrement steps when we move one step ahead within the max Range
            steps--;

            //When all steps are used it is equivalent to one jump therefore jump is incremented
            if (steps == 0)
            {
                jump++;

                //Max range cannot be behind the current position otherwise its unreachable
                if (i >= maxR)
                    return -1;

                //For next jump, the required no of steps
                steps = maxR - i;
            }
        }
    }
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << minJumps(arr, n) << endl;

    return 0;
}

// 11
// 1 3 5 8 9 2 6 7 6 8 9
// 3