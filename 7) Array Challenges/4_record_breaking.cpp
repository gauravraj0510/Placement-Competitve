#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size (max 10): ";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n == 1)
    {
        cout << "Rec breaking days: 1";
        return 0;
    }
    int max = -1, rec_days = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            if (arr[i] > arr[i + 1])
            {
                rec_days++;
            }
        }
    }
    if(arr[n-1]>max){
        rec_days++;
    }
    cout << "Rec breaking days: "<<rec_days;


    return 0;
}

// Google Kickstart Questions

// PROBLEM
// Isyana is given the number of visitors at her local theme park on N consecutive
// days. The number of visitors on the i-th day is V i . A day is record breaking if it
// satisfies both of the following conditions:
// ● The number of visitors on the day is strictly larger than the number of
// visitors on each of the previous days.
// ● Either it is the last day, or the number of visitors on the day is strictly larger
// than the number of visitors on the following day.
// Note that the very first day could be a record breaking day!
// Please help Isyana find out the number of record breaking days.

// INPUT
// The first line of the input gives the number of test cases, T . T test cases follow.
// Each test case begins with a line containing the integer N . The second line
// contains N integers. The i-th integer is V i .

// OUTPUT
// For each test case, output one line containing Case #x: y, where x is the test case
// number (starting from 1) and y is the number of record breaking days.

// CONSTRAINTS
// Time limit: 20 seconds per test set.
// Memory limit: 1GB.
// 1 ≤ T ≤ 100.
// 0 ≤ V i ≤ 2 × 10 5 .
// Test set 1
// 1 ≤ N ≤ 1000.
// Test set 2
// 1 ≤ N ≤ 2 × 10 5 for at most 10 test cases.
// For the remaining cases, 1 ≤ N ≤ 1000.