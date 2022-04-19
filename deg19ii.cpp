//Factorial of a Number using Iteration
#include <iostream.h>
int main()
{
	int n , fact = 1, i;
	cout<<"Enter the value: ";
	cin>>n;
   for(i=1; i<=n; i++)
      fact = fact * i; 
   cout<<"Factorial of "<< n <<" is "<<fact;
   return 0;
}
