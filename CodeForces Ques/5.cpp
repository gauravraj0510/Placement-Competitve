/*https://codeforces.com/problemset/problem/271/A*/

#include <iostream>
#include <string> 
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int i = n+1;
    int ans;
    while(1)
    {
      int one,ten,hund,tho;
      one = i%10;
      ten = (i%100)/10;
      hund = (i%1000)/100;
      tho = (i%10000)/1000;

      if(one!=ten && one!=hund && one!=tho && ten!=hund && ten!=tho && hund!=tho)
      {
        ans = i;
        break;
      }
      else{
        i++;
      }
    }

    cout<<ans; 
      
    return 0;
} 

// 1987
// 2013