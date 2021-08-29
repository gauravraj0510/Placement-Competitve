/*https://codeforces.com/problemset/problem/32/B*/

#include <iostream>
#include <string> 
using namespace std;

int main() {
    
    int n;
    string que = {};
    string ans = {};
    cin>>que;
    n = que.length();    
   
    int j = 0;
    while(j<n){
      if(que[j] == '.')
      {
        ans = ans + '0';
        j++;
      }
      else if(que[j]=='-' && que[j+1]=='.')
      {
        ans = ans + '1';
        j = j+2;        
      }
      else if(que[j]=='-' && que[j+1]=='-')
      {
        ans = ans + '2';
        j = j+2;        
      }
      
    }
    
    cout<<ans;
      
    return 0;
} 

// -..-.--
// 1012