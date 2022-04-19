//c++ program to print the sum and product of digtis of an integer
#include<iostream>
using namespace std;
int main()
  {
  int n;
  int dig,sum,pro;
  cout<<"\n enter an integer number";
  /*calculating sum and product*/
  sum=0;
  pro=1;
  while (n>0
  
{
	 dig=n%10; /*get digit*/
	 Sum+=dig;
	 pro*=dig;
	  n=n/10;
  }
	cout<<"\nsum of all Digits is:"<<sum;
	  cout<<"\n PRODUCT of all digits;"<<pro;
	return0;
  }


