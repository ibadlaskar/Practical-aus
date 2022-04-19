//C++ program prints a table indicating the number of occurrences of each alphabet in the text entered
#include<iostream.h>
#include<string.h>
int main()
{
	char string[100];
	int c = 0, count[26] = {0}, x;

cout<<"Please enter a line.\n";
	cin.getline(string,80);

	while (string[c] != '\0') {
 
		if (string[c] >= 'a' && string[c] <= 'z') {
			x = string[c] - 'a';
         count[x]++;
		}
 
		c++;
	}
	for (c=0;c<26;c++)

cout<<char(c+'a')<<" occurs "<< count[c]<<" times in the string.\n" ;
	return 0;
}
