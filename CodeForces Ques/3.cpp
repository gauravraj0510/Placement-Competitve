/*https://codeforces.com/problemset/problem/266/B*/

#include <iostream>
#include <string> 
using namespace std;

int main() {
    
    int n,t;
    string que = {};
    cin>>n>>t;
    cin>>que;
    
    for(int i=0;i<t;i++)
    {
      int j = 0;
      while(j<n){
        if(que[j]=='B' && que[j+1]=='G')
        {
          que[j] = 'G';
          que[j+1] = 'B';
          j = j+2;
          
        }
        else{
          j++;
        }
      }
    }
    cout<<que;
      
    return 0;
} 

// 5 2
// BGGBG
// GGBGB