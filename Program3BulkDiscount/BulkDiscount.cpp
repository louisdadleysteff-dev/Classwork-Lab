/*
Name: Louis Dadley
Program: Program 3 Bulk Discount
Description: Calculates a bulk purchase discount, shipping cost, and grand total.
*/

#include <iostream> 
#include <iomanip>

using namespace std;

int main()
{
// HOUSEKEEPING

int QUANTITY = 0;
const double UNIT_PRICE = 199.00;
const double SHIPPING_RATE = 0.02;

double originalPurchase = 0.0;
double shippingCost = 0.0;
double grandTotal = 0.0;
double discountAmount = 0.0;

// INPUT

cout << "Enter number of units purchased: ";
cin >> QUANTITY;

// PROCESSING 

originalPurchase = QUANTITY * UNIT_PRICE;

if (QUANTITY >= 100)
{
    discountAmount = originalPurchase * 0.50;
}
else if (QUANTITY >= 50)
{
    discountAmount = originalPurchase * 0.40;
}
else if (QUANTITY >= 20)
{
    discountAmount = originalPurchase * 0.30;
}
else if (QUANTITY >= 10)
{
    discountAmount = originalPurchase * 0.20;
}
else
{
    discountAmount = 0.0;
}

shippingCost = originalPurchase * SHIPPING_RATE;

grandTotal = originalPurchase - discountAmount + shippingCost;

// OUTPUT

cout << "Quantity Purchased: " << QUANTITY << endl;
cout << fixed << setprecision(2);

cout << "Original Retail Purchase: $" << originalPurchase << endl;
cout << "Discount Amount: $" << discountAmount << endl;
cout << "Shipping Cost: $" << shippingCost << endl;
cout << "Grand Total: $" << grandTotal << endl;
return 0;
}