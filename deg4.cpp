
//C++ program to compute the sum of the first n terms of the following series S =1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
#include<iostream>
using namespace std;

int main()
{
	int i,n;
	float sum=0;

	cout<<"Enter the value of the term:  ";
	cin>>n;

	for(i=1;i<=n;i++)
		sum += 1.0/i;

	cout<<"Sum : "<<sum;

	
	return 0;
}

