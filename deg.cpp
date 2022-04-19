	#include<stdio.h>
	int main()
 {
 int arr [100],n,i, sum =0;
 printf("enter the number of elements you want to insert ");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 printf ("Enter the element: %d",i+1);
 scanf("%d",&arr[i]);
 sum+=arr[i];
 printf("\n The sum of the array is: %d", sum);
 printf("\n The average of the array is: %2f", (float) sum/n);
 }
 return 0;
 }
