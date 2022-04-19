//C++ program to make menu driven program to perform  operations on strings
#include <iostream.h>
#include <stdlib.h>
#include <conio.h>
 
int  Str_Length  (char *);
void Str_Reverse (char *, char *);
void Str_Concat  (char *, const char *);
void Str_Copy    (char *, char *);
int  Str_SubStr  (const char *, char *);
int  Str_Comp    (char *, char *);
 
int main(){
    int ch, num;
    char *str1, *str2;
    str1 = new(char);
    str2 = new(char);
    while(1){
        clrscr();
        cout<<"\n STRING MANIPULATION PROGRAMME";
        cout<<"\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
        cout<<"\n 1 -> String Length.";
        cout<<"\n 2 -> String Reverse.";
        cout<<"\n 3 -> String Concatenation.";
        cout<<"\n 4 -> String Copy.";
        cout<<"\n 5 -> Sub String.";
        cout<<"\n 6 -> String Comparision.";
        cout<<"\n 7 -> Exit.";
        cout<<"\n\n Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"\n Enter a String: ";
                cin>>str1;
                cout<<"\n Length of String "<<str1<<" is: "
                    <<Str_Length(str1);
                break;
            case 2:
                cout<<"\n Enter a String: ";
                cin>>str1;
                cout<<"\n Reverse String "<<str1<<" is: ";
                Str_Reverse(str1, str2);
                cout<<str2;
                break;
 
            case 3:
                cout<<"\n Enter 1st String: ";
                cin>>str1;
                cout<<"\n Enter 2nd String: ";
                cin>>str2;
					 cout<<"\n Concate of Strings: "<<str1<<" & "<<str2<<" is: ";
                Str_Concat(str1, str2);
                cout<<str1;
                break;
            case 4:
                cout<<"\n Enter a String: ";
                cin>>str1;
                Str_Copy(str1, str2);
                cout<<"\n String str2 is: "<<str2;
                break;
            case 5:
                cout<<"\n Enter a String: ";
                cin>>str1;
                cout<<"\n Now enter an Another String: ";
                cin>>str2;
                num = Str_SubStr(str1, str2);
                if(num == 1)
						  cout<<"\n The Sub String: "<<str2<<"is Present in the String: "<<str1;
                else
						  cout<<"\n The Sub String: "<<str2<<" is NOT Present in String: "<<str1;
                break;
            case 6:
                cout<<"\n Enter 1st String: ";
                cin>>str1;
                cout<<"\n Enter 2nd String: ";
                cin>>str2;
                num = Str_Comp(str1, str2);
                if(num == 0)
                    cout<<"\n String str1: "<<str1
								<<" & String str2: "<<str2<<"are Equal";
                else if(num < 0)
                    cout<<"\n String str1: "<<str1
								<<" is Smaller than String str2: "<<str2;
                else
                    cout<<"\n String str1: "<<str1
                        <<" is Greater than String str2: " <<str2;
                break;
            default:
                delete(str1);
                delete(str2);
                exit(1);
            } // end of switch.
        getch();
        } // end of while.
    } // end of main.
 
int Str_Length(char *st){
    int len = 0;
    while(*(st+len) != '\0')
        len++;
    return len;
    }
 
void Str_Reverse(char *st, char *temp){
    int len, i=0;
    len = Str_Length(st);
    while(len > 0){
        len--;
        *(temp+i) = *(st+len);
        i++;
        }
    *(temp+i) = '\0';
    }
 
void Str_Concat(char *st1, const char *st2){
    int i = 0, j = 0;
    while(*(st1+i) != '\0')
        i++;
    while(*(st2+j) != '\0'){
        *(st1+i) = *(st2+j);
        i++;
        j++;
        }
    *(st1+i) = '\0';
    }
 
void Str_Copy(char *st1, char *st2){
    int i=0, len;
    len = Str_Length(st1);
    for(i=0; i<len; i++)
        *(st2+i) = *(st1+i);
    *(st2+i)='\0';
    }
 
int Str_SubStr(const char *st1, char *st2){
    int i=0, j=0;
    int flag=0;
    while( (*(st1+i) != '\0') && (*(st2+j) != '\0') ){
        if( *(st1+i) == *(st2+j) )
            j++, flag=1;
        else
            flag=0, j=0;
        i++;
        }
    if (flag == 1)
        return 1;
    else
        return 0;
    }
 
int Str_Comp(char *st1, char *st2){
    int n1, n2, x;
    n1 = Str_Length(st1);
    n2 = Str_Length(st2);
    if(n1 == n2)
        x = 0;
    else if(n1 < n2)
        x = -1;
    else
        x = 1;
    return x;
    }
