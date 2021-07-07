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

    int length = 2;
    int pd = arr[1] - arr[0];
    int curr_length = 2;

    for (int j = 2; j < n; j++)
    {
        if(arr[j]-arr[j-1] == pd){
            curr_length++;
        }
        else{
            pd = arr[j]-arr[j-1];
            curr_length = 2;
        }
        if(curr_length>length)
        {
            length = curr_length;
        }
    }

    cout<<"Longest arithmetic subarray length: "<<length;

    return 0;
}

// Enter array size (max 10): 10
// 1
// 5
// 7
// 9
// 11
// 15
// 18
// 21
// 45
// 5
// Longest arithmetic subarray length: 4

// Google Kickstart Questions
// PROBLEM
// An arithmetic array is an array that contains at least two integers and the
// differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
// and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
// not arithmetic arrays.
// Sarasvati has an array of N non-negative integers. The i-th integer of the array is
// A i . She wants to choose a contiguous arithmetic subarray from her array that has
// the maximum length. Please help her to determine the length of the longest
// contiguous arithmetic subarray.

// INPUT
// The first line of the input gives the number of test cases, T . T test cases follow.
// Each test case begins with a line containing the integer N . The second line
// contains N integers. The i-th integer is A i .

// OUTPUT
// For each test case, output one line containing Case #x: y, where x is the test case
// number (starting from 1) and y is the length of the longest contiguous arithmetic
// subarray.

// CONSTRAINTS
// Time limit: 20 seconds per test set.
// Memory limit: 1GB.
// 1 ≤ T ≤ 100.
// 0 ≤ A i ≤ 10 9 .
// Test Set 1
// 2 ≤ N ≤ 2000.
// Test Set 2
// 2 ≤ N ≤ 2 × 10 5 for at most 10 test cases.
// For the remaining cases, 2 ≤ N ≤ 2000.