/*
Implement function maxabsinlst(lst), which returns the maximum absolute
value of the elements in the array.
For example, given a array lst: [-19, -3, 20, -1, 0, -25], the function
should return 25.

The name of the method should be maxabsinlst and the method should take two parameters.  The first parameter is the array of values to test.  The second parameter is the number of elements in the array. Here is an example call to the function

int lst[] = {-19, -3, 20, -1, 5, -25};
printf(“%i”,maxabsinlst(lst,6));

Function Signature
int maxabsinlst(int lst[], int size);

File Name 
maxabsinlst.cpp

Note: You do not need to submit any other code including  the main method or any print statements. ONLY the maxabsinlst function is required. Otherwise, the autograder will fail and be unable to grade your code. (I.e., do not include the above example in your code.) The above example should be used to test your code but deleted or commented out upon submission.
*/

int maxabsinlst(int lst[], int size)
{
	int max = lst[0]<0? (lst[0]*(-1)) :lst[0];
	
	for(int i=1; i<size; i++)
	{
		int knt = lst[i] < 0 ? (lst[i] * (-1)) : lst[i];
		if (max < knt)
			max = knt;
	}
    return max;
}
