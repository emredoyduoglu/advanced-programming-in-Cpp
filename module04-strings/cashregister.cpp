/*
Write a program that computes how much a customer has to pay after purchasing
two items. 

The price is calculated according to the following rules:
• Buy one get one half off promotion: the lower price item is half price.
• If the customer is a club card member, additional 10% off.
• Tax is added.


Inputs to the program include:
• Two items’ prices
• Have club card or not (User enters ‘Y’ or ‘y’ for “yes”; ‘N’ or ‘n’ for “no”)
• Tax rate (User enters the percentage as a number; for example, they enter
8.25 if the tax rate is 8.25%)

Program displays:
• Base price - the price before the discounts and taxes
• Price after discounts - the price after the buy one get one half off promotion
and the member’s discount, if applicable
• Total price – the amount of money the customer has to pay (after tax)
printed with the precision of 2 decimal digits.

Hint: In order to print a number in a specific precision, you can use the round
function passing 2 arguments to it. To format to two decimal places you can use the printf function with the format of 2.2f.

For example, an execution could look like this:

Enter price of the first item: 10
Enter price of the second item: 20
Does customer have a club card? (Y/N): y
Enter tax rate, e.g. 5.5 for 5.5% tax: 8.25
Base price = 30.00
Price after discounts = 22.50
Total price = 24.36

File Name 
cashregister.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string clubCard;
    double price1, price2, taxRate, basePrice, priceAfterDiscount, totalPrice;
    cout << "Enter price of the first item: "; 
    cin >> price1; 
    cout << "Enter price of the second item: "; 
    cin >> price2; 
    cout << "Does customer have a club card? (Y/N): "; 
    cin >> clubCard; 
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: "; 
    cin >> taxRate; 
 
    basePrice = price1 + price2;
    
    priceAfterDiscount = price1>=price2 ? price1+(price2/2) : price2+(price1/2);
    if(clubCard=="Y" || clubCard=="y")
        priceAfterDiscount *= 0.9;
    totalPrice = priceAfterDiscount * (1.00+(taxRate/100.00));
    
    printf("Base price = %2.2f\n",basePrice);
    printf("Price after discounts = %2.2f\n",priceAfterDiscount);
    printf("Total price = %2.2f\n",totalPrice);

    return 0;
}
