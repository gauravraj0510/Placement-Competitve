#include <iostream>
#include <climits>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter max char length: ";
    cin >> n;
    cin.ignore();
    char a[100] = {};
    cout<<"\nEnter string:- \n";
    cin.getline(a, n);
    cin.ignore();
    int len = sizeof(a)/sizeof(a[0]);

    int i = 0;
    while(i < len-1-i)
    {
      char temp = a[i];
      a[i] = a[len-1-i];
      a[len-1-i] = temp;
      i++;
    }
    cout<<"\nReversed string:- \n";
    for(int i =0; i<len; i++)
    {
      cout<<a[i];
    }
    return 0;
}

// Enter max char length: 11

// Enter string:- 
// Gaurav Raj


// Reversed string:- 
// jaR varuaG