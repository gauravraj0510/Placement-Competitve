/*https://codeforces.com/problemset/problem/266/A*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  int n;
  cin >> n;
  cin.ignore();
  getline(cin, input);
  int count = 0;
  for(int i = 0; i < n-1; i++)
  {
    if(input[i] == input[i+1])
    {
      count++;
    }            
  }
  cout<<count;

  return 0;
}

// 3
// RRG
// 1