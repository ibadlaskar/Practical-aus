// C++ program to to find sum of n elements entered by the user using malloc() functions
#include <iostream.h>
#include <stdlib.h>
int main(){
    	int n,i,*ptr,sum=0;
    	cout<<"Enter number of elements: ";
		cin>>n;
    	ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc
    
	if(ptr==NULL){
        	cout<<"Error! memory not allocated.";
        	exit(0);
    	}
 
   	 cout<<"Enter elements of array: ";
    	for(i=0;i<n;++i){
        	cin>>*(ptr+i);
        	sum+=*(ptr+i);
    	}	
 
    	cout<<"Sum is "<<sum;
    	free(ptr);
    	return 0;
}
