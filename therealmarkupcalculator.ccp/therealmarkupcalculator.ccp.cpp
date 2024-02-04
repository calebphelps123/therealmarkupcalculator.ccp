// Program Name: MarkupCalculator.cpp
// IPO Chart:
// Input: Original price, Mark-up percentage, Sales tax rate
// Processing: Calculate selling price, sales tax, and final price
// Output: Original price, Mark-up percentage, Selling price, Sales tax rate, Sales tax, Final price


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables
    double originalPrice, markupPercentage, salesTaxRate;

    //Input variables
    cout << "Enter the original price of the item: ";
    cin >> originalPrice;

    cout << "Enter the markup percentage of the item: ";
    cin >> markupPercentage;

    cout << "Enter the sales tax rate of the item: ";
    cin >> salesTaxRate;
    // calculate the markup amount and selling price
    double markupAmount = originalPrice * (markupPercentage / 100);
    double sellingPrice = originalPrice + markupAmount;

    // Calculate sales tax and final price 
    double salesTax = sellingPrice * (salesTaxRate / 100);
    double finalPrice = sellingPrice + salesTax;

    //Output
    cout << fixed << setprecision(2); // Set decimal precision to 2 places
    cout << "Original Price: $" << originalPrice << endl;
    cout << "Markup Percentage: " << markupPercentage << "%" << endl;
    cout << "Selling Price: $" << sellingPrice << endl;
    cout << "Sales Tax Rate: " << salesTaxRate << "%" << endl;
    cout << "Sales Tax: $" << salesTax << endl;
    cout << "Final Price: $" << finalPrice << endl;


    return 0;
}