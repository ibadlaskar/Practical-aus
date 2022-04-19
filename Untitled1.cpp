#include<iostream>
using namespace std;
int main()
{
	int n,m=0,flag=0,i;
	cout<<"enter a number ";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"this num not prime"<<endl;
			
			
			
			
			
			
			
			flag=1;
			break;
		}
	}
		
		if(flag==0)
			cout<<"the is peime"<<endl;
		
		
		return 0;
		
	}
