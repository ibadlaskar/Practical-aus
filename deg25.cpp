#include<iostream.h>
#include<conio.h>

struct  student
{
char name[50];
int roll_no;
int class_no;
int year;
int total_marks;
};

int main()
{

student s1;
clrscr();

cout<< "Enter Full name: ";
cin.get(s1.name, 50);
cout<< "Enter Roll No: ";
cin>> s1.roll_no;
cout<< "Enter Class: ";
cin>> s1.class_no;
cout<< "Enter Year: ";
cin>> s1.year;
cout<< "Enter Total Marks: ";
cin>> s1.total_marks;

cout<< "\nDisplaying Information." <<endl;
cout<< "Name: " << s1.name <<endl;
cout<<"Roll No: " << s1.roll_no <<endl;
cout<< "Class: " << s1.class_no<<endl;
 cout<<"Roll No: " << s1.year <<endl;
cout<< "Class: " << s1.total_marks;
getch();
return 0;
}
