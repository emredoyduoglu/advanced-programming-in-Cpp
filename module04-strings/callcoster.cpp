/*
Write a program that computes the cost of a long-distance call. The cost of the call is
determined according to the following rate schedule:
• Any call started between 8:00 A.M. and 6:00 P.M., Monday through Friday, is
billed at a rate of $0.40 per minute.
• Any call starting before 8:00 A.M. or after 6:00 P.M., Monday through Friday, is
charged at a rate of $0.25 per minute.
• Any call started on a Saturday or Sunday is charged at a rate of $0.15 per
minute.
The input will consist of the day of the week, the time the call started, and the length
of the call in minutes.
The output will be the cost of the call.

Notes:
1. The time is to be input as 4 digit number, representing the time in 24-hour
notation, so the time 1:30 P.M. is input as 1330
2. The day of the week will be read as one of the following three character string:
‘Mon’, ‘Tue’, ‘Wed’, ‘Thr’, ‘Fri’, ‘Sat’ or ‘Sun’
3. The number of minutes will be input as a positive integer.

For example, an execution could look like this:

Enter the day the call started at: Fri
Enter the time the call started at (hhmm): 2350
Enter the duration of the call (in minutes): 22
This call will cost $5.50

File Name 
callcoster.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string day;
    double cost;
    int hour, minute;
    cout << "Enter the day the call started at: "; 
    cin >> day; 
    cout << "Enter the time the call started at (hhmm): "; 
    cin >> hour; 
    cout << "Enter the duration of the call (in minutes): "; 
    cin >> minute; 
    
    if (day == "Sat" || day == "Sun")
    {
        cost = minute * 0.15;
    }
    else if(hour>=800 && hour<=1800)
    {
        cost = minute * 0.40;
    }else
    {
        cost = minute * 0.25;
    }
    
    printf("This call will cost $%2.2f\n",cost);

    return 0;
}
