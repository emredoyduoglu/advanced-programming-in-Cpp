/*
Modify your earlier BMI Metric program to also display the CDC standard weight status categories:

The CDC standard weight status categories are:

BMI                 Weight Status
Below 18.5          Underweight
18.5-24.9           Normal
25.0-29.9           Overweight
30.0 and above      Obese

For example,  an  execution could look  like  this:
Please enter weight in kilograms: 50
Please enter height in meters: 1.58
BMI is: 20.03, Status is Normal

File Name 
bmimetric2.cpp
*/

#include <iostream>

using namespace std;

float bmimetricf(int weight, float height)
{
    return weight / (height * height );
}

int main()
{
    double weight, height, BMI; 
	cout << "Please enter weight in kilograms: "; 
    cin >> weight; 
    cout << "Please enter height in meters: "; 
    cin >> height; 
 
    BMI = bmimetricf(weight, height); 
    printf("BMI is: %.2f, Status is ",BMI);
    if(BMI < 18.5) 
        cout << "Underweight"; 
    if(BMI >= 18.5 && BMI <= 24.9) 
        cout << "Normal"; 
    if(BMI >= 25.0 && BMI <= 29.9) 
        cout << "Overweight"; 
    if(BMI > 30.0) 
        cout << "Obese";
    return 0;
}
