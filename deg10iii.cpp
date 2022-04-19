#include<iostream.h>

 int main()
  {
	int arr[20],i,j=0,no, sum=0;
        float avg;
	cout<<"How Size of Array: ";
	cin>>no;
	cout<<"Enter any "<<no<<" elements in Array: ";
	for(i=0; i<no;i++)
	{
	cin>>arr[i];
	}
	for(i=0; i<no;i++)
	{

  sum=sum+arr[i];
   j++;

	}
avg=sum/j;
cout<<"\nsum is ="<< sum<<"  ";
cout<<"\naverage is ="<<avg<<"  ";
  return 0;
  }
