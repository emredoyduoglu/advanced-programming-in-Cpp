/*
Write a function that is given a phrase and returns the phrase we get if we take  
out the first word from the input phrase.
For example, given ‘the quick brown fox’, your function should return ‘quick brown fox’

Here is an example call to the function
Cout << remainingwords(“the quick brown fox”);

Function Signature
string remainingwords(string s);

File Name 
remainingwords.cpp

Note: You do not need to submit any other code including  the main method or any print statements. ONLY the remainingwords function is required(leave in your includes and namespace directives). Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.
*/

#include <iostream>
#include <string>

using namespace std;

string remainingwords(string s)
{
	string fWord;
	fWord = s.substr(s.find(" ")+1,s.length()-s.find(" "));
	return fWord;
}
