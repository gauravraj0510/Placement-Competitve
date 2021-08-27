/* https://codeforces.com/problemset/problem/69/A */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool ans = 1;
    int arr[100][3];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++)
          cin >> arr[i][j];
    }
    for (int j = 0; j < 3; j++) {
      int sum = 0;
      for (int i = 0; i < n; i++){
        sum = sum + arr[i][j];
      }
      if(sum != 0)
        ans = 0;
    }
    if(ans == 0)
    {
      cout<<"NO";
    }
    else{
      cout<<"YES";
    }
    return 0;
} 

// 13
// -3 -36 -46
// -11 -50 37
// 42 -11 -15
// 9 42 44
// -29 -12 24
// 3 9 -40
// -35 13 50
// 14 43 18
// -13 8 24
// -48 -15 10
// 50 9 -50
// 21 0 -50
// 0 0 -6
// YES