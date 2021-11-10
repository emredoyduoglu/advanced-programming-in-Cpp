/*
Write a program that  reads a character (string of  length  1)  from  the 
user, and classifies it to  one of the following: lower case letter, upper case letter, 
digit,  or non-alphanumeric character 

Sample  output (4 different executions):  
Enter a character: j
j is  a lower case  letter.
Enter a character: 7
7 is  a digit.
Enter a character: ^
^ is  a non-alphanumeric  character.
Enter a character: C
C is  an  upper case  letter.

File Name 
chartype.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str,first,second;
    cout << "Enter a character: "; 
    getline(cin,str); 
    
    if(isdigit(str[0]))
    {
        cout<<str<<" is a digit.";
    }
    else if(isalpha(str[0]))
    {
        if(islower(str[0]))
        {
            cout<<str<<" is  a lower case  letter.";
        }
        else
        {
            cout<<str<<" is  an  upper case  letter.";
        }
    }
    else
    {
        cout<<str<<" is  a non-alphanumeric  character.";
    }
    return 0;
}
