/*https://codeforces.com/problemset/problem/281/A*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string input;
  getline(cin, input);
  int n = input.length();
  for(int i = 0; i < n; i++)
  {
    if(input[i]>=97 && input[i]<=122 && i==0)
    {
      input[i] = (char)((int)input[i] - 32);           
    }
    else if(input[i]==' ' && input[i+1]!=' ' && input[i+1]>=97 && input[i+1]<=122)
    {
      input[i+1] = (char)((int)input[i+1] - 32);   
    }
  }
  
  for(int i = 0; i < n; i++)
  {
    cout<<input[i];
  }

  return 0;
}

// gd gdsaghjsd gdhs
// Gd Gdsaghjsd Gdhs