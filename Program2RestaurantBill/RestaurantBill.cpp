// Name: Dadley Steff Louis
// Program: Restaurant Bill
// Description : This program calculates the total cost of a restaurant bill.

#include <iostream> 
using namespace std; 

int main()
{
    double mealCost;
    double salesTax;
    double tip;
    double grandTotal;

    cout << "Enter the cost of the meal: $";
    cin >> mealCost;
    salesTax = mealCost * 0.0825;
    tip = mealCost * 0.18;
    grandTotal = mealCost + salesTax + tip;
    
    cout << "Meal Cost: $" << mealCost << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Grand Total: $" << grandTotal << endl;

    return 0;
}