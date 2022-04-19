//Fibonacci Series using Recursion 
#include<iostream.h>
#include<conio.h>
int fib(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fib(n-1) + fib(n-2); 
} 
  
int main () 
{ 
	 int n ;
	 cout<<"Enter the value: ";
	 cin>>n; 
    cout << fib(n); 
    getch();
    return 0; 
} 
