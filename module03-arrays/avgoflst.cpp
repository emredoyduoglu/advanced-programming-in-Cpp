/*
Implement function avgoflst(lst), which returns the average
value of the elements in the array.
For example, given a array lst: [19, 2, 20, 1, 0, 18], the function
should return 10.

The name of the method should be avgoflst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function

int lst[] = {19, 2, 20, 1, 0, 18};
printf(“%3.0f”,avgoflst(lst,6));

Function Signature
float avgoflst(int lst[], int size);

File Name 
avgoflst.cpp

Note: You do not need to submit any other code including  the main method or any print statements. ONLY the avgoflst function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.
*/

float avgoflst(int lst[], int size)
{
	int total = 0;
	
	for(int i=0; i<size; i++)
	{
		total += lst[i];
	}
    return total / (size*1.0);
}
