/*
Write a function that is given a phrase and returns the first word in that phrase.
For example, given ‘the quick brown fox’, your function should return ‘the’.

Here is an example call to the function
cout << firstword(“the quick brown fox”);

Function Signature
string firstword(string s);

File Name 
firstword.cpp

Note: You do not need to submit any other code including the main method or any print statements. ONLY the firstword function is required (leave in your includes and namespace directives). Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.
*/

#include <iostream>
#include <string>

using namespace std;


string firstword(string s)
{
	string fWord;
	fWord = s.substr(0,s.find(" "));
	return fWord;
}
