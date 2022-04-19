// Print the even-valued elements
#include<iostream.h>

 int main()
  {
   int arr[20],even[20],odd[20],i,j=0,k=0,no;
   cout<<"How Size of Array: ";
   cin>>no;
   cout<<"Enter any "<<no<<" elements in Array: ";
   for(i=0; i<no;i++)
   {
   cin>>arr[i];
   }
   for(i=0; i<no;i++)
   {
   if(arr[i]%2==0)
   {
    even[j]=arr[i];
    j++;
   }
   else
   {
   odd[k]=arr[i];
   k++;
   }
   }
  cout<<"\nEven Elements: ";
  for(i=0; i<j ;i++)
   {
    cout<<even[i]<<"  ";
   }
  return 0;
  }

