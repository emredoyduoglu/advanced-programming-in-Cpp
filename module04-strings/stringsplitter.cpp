/*
Read from the user a string containing 
odd number of characters. Your program should: 
a) Print the middle character. 
b) Print the string up to but not including the middle character (i.e., the first half 
of the string). 
c) Print the string from the middle character to the end (not including the 
middle character). 

Sample output: 
Enter an odd length string: Fortune favors the bold
Middle character: o
First half: Fortune fav
Second half: rs the bold

File Name 
stringsplitter.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str,first,second;
    cout << "Enter an odd length string: "; 
    getline(cin,str); 
    
    first = str.substr(0,str.length()/2);
	second = str.substr(str.length()/2 + 1,str.length()/2);
    cout<<"Middle character: "<< str[str.length()/2]<<endl;
    cout<<"First half: "<<first<<endl;
    cout<<"Second half: "<<second<<endl;
    
    return 0;
}
