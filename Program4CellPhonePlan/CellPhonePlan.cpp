/*
Name: Louis Dadley
Program: Program 4 Cell Phone Plan
Description: Calculates a customer's monthly cell phone bill 
             and displays possible savings from other plans.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
// HOUSEKEEPING

const double PLAN_A_PRICE = 39.99;
const double PLAN_B_PRICE = 59.99;
const double PLAN_C_PRICE = 79.99;

const int PLAN_A_GB = 2;
const int PLAN_B_GB = 8;
const double EXTRA_GB_COST = 8.00;

string customerName;
char planType;
double gigabytesUsed = 0.0;
double totalBill = 0.0;
double savingsB = 0.0;
double savingsC = 0.0;
double planBBill = 0.0;
double planCBill = 0.0;

// INPUT

cout << "Enter customer name: ";
getline(cin, customerName);
cout << endl;
cout << "Enter plan type (A, B OR C): ";
cin >> planType;
cout << endl;
cout << "Enter gigabytes used: ";
cin >> gigabytesUsed;
cout << endl;

// PROCESSING

if (planType == 'A')
{
    if (gigabytesUsed > PLAN_A_GB)
    {
        totalBill = PLAN_A_PRICE + (gigabytesUsed - PLAN_A_GB) * EXTRA_GB_COST;
    }
    else
    {
        totalBill = PLAN_A_PRICE;
    }
}
if (planType == 'B')
{
    if (gigabytesUsed > PLAN_B_GB)
    {
        totalBill = PLAN_B_PRICE + (gigabytesUsed - PLAN_B_GB) * EXTRA_GB_COST;
    }
    else 
    {
        totalBill = PLAN_B_PRICE;
    }
}
if (planType == 'C')
{
    totalBill = PLAN_C_PRICE;
}

if ( planType == 'A')
{
        if (gigabytesUsed > PLAN_B_GB) 
        {
            planBBill = PLAN_B_PRICE + (gigabytesUsed - PLAN_B_GB) * EXTRA_GB_COST;
        }
        else 
        {
            planBBill = PLAN_B_PRICE;
        }
        planCBill = PLAN_C_PRICE;
        savingsB = totalBill - planBBill;
        savingsC = totalBill - planCBill;
}
if (planType == 'B')
{
    planCBill = PLAN_C_PRICE;
    savingsC = totalBill - planCBill;
}

// OUTPUT

cout << fixed << setprecision(2);

if (savingsB > 0)
{
    cout << "Savings with plan B: $" << savingsB << endl;
}
if (savingsC > 0)
{
    cout << "Savings with Plan C: $" << savingsC << endl;
}

cout << "Customer Name: " << customerName << endl;
cout << "Plan: " << planType << endl;
cout << "Gigabytes Used: " << gigabytesUsed << endl;
cout << "Amount Due: $" << totalBill << endl;
return 0; 
}