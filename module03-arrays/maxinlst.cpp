/*
Implement function maxinlst(lst), which returns the maximum value of the elements in the array.
For example, given an array lst: [-19, -3, 20, -1, 5, -25], the function
should return 20.


The name of the method should be maxinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function

int lst[] = {-19, -3, 20, -1, 5, -25};
printf(“%i”,maxinlst(lst,6));

File Name 
maxinlst.cpp

Function Signature
int maxinlst(int lst[], int size);

Note: You do not need to submit any other code including  the main method or any print statements. ONLY the maxinlst function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.
*/

int maxinlst(int lst[], int size)
{
	int max=lst[0];
	
	for(int i=1; i<size; i++)
	{
		if(max<lst[i])
			max = lst[i];
	}
    return max;
}
