/*https://codeforces.com/problemset/problem/59/A*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  cin>>input;
  int n = input.length();
  string upper = {};
  string lower = {};
  for(int i = 0; i < n; i++)
  {
    if(input[i]>=65 && input[i]<=90)
    {
      upper = upper + input[i];
      lower = lower + (char)((int)input[i] + 32);     
    }
    if(input[i]>=97 && input[i]<=122)
    {
      upper = upper + (char)((int)input[i] - 32);
      lower = lower + input[i];        
    }
  }
  int highCount = 0;
  for(int i = 0; i < n; i++)
  {
    if(input[i]>=65 && input[i]<=90)
    {
      highCount++;
    }
  }
  int lowCount = n - highCount;
  if(lowCount>=highCount)
  {
    cout<<lower;
  }
  else{
    cout<<upper;
  }
  return 0;
}

// HoUse
// house