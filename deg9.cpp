//C++ prgram to print a triangle of stars
#include<iostream.h>
int main()
{
int i,c;

for(i=1;i<=9;i+=2)
{
for(c=1;c<=9-i;c+=2)
cout<<" ";
for(c=1;c<=2*i-1;c+=2)
cout<<"*";
cout<<"\n";
}
return 0;
}