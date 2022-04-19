//C++ program to print the sum and product of digits of an integer.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int dig, sum,pro;
     
    cout<<"\nEnter an integer number :";
    cin>>n;
  
    /*Calculating Sum and Product*/
    sum=0;
    pro=1;
     
    while(n>0)
    {
        dig=n%10; /*get digit*/
        sum+=dig;
        pro*=dig;
        n=n/10;
    }                                        
     
    cout<<"\nSUM of all Digits is :"<<sum;
cout<<"\nPRODUCT of all digits: "<<pro;
     
    return 0;
    }

