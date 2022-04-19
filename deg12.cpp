//C++ program that swaps two numbers using pointers.
#include<iostream.h>
#include<conio.h>
void main()
{
 int num1,num2,*x,*y,temp;
 cout<<"Enter value of first number: ";
 cin>>num1;
 cout<<"Enter value of second number: ";
 cin>>num2;
 x = &num1;
 y = &num2;

 temp = *x;
 *x = *y;
 *y = temp;
 cout<<"\n\nValue of first number after swaping: "<<*x;
 cout<<"\nValue of second number after swaping: "<<*y;
 getch();
}
