// Casey Sova 10/2/2022
// Week 6 Homework
// Create a program that calculates and displays the total retail values for a series of sales transactions input by a user.

#include <iomanip>
#include <iostream>
#include "Product.h"

// The following is a using namespace to help keep the program organized and easy to read.
using namespace std;

int main() {
	
// The following statement is needed to allow for 2 decimal place precision on decimal values.	
	cout << fixed;
	
// The following is the instantiation of the integer variables used in the ProductDriver.	
	int productNumber;
	int quantitySold;
	
// The following is the instantiation of 5 objects of the Product class, passing the correct price for each product.	
	Product product1(2.98);
	Product product2(4.50);
	Product product3(9.98);
	Product product4(4.29);
	Product product5(8.67);
	
// The following prompts the user for a product number and stores the value in the variable 'productNumber'.	
	cout << "Product number: ";
	cin >> productNumber;
	
// While the value stored in 'productNumber' is not equal to 0, the following while loop will run.	
	while (productNumber != 0) {
		
// The following prompts the user for the quantity sold and stores the value in the variable 'quantitySold'.		
		cout << "Quantity sold: ";
		cin >> quantitySold;
		
// The following is a switch statement.		
		switch (productNumber) {
			
// If the value stored in 'productNumber' is equal to 1, the following Product object's sales is updated by calling 
// the'updateTotalSales' function.			
			case 1:
				product1.updateTotalSales(quantitySold);
				break;
				
// If the value stored in 'productNumber' is equal to 2, the following Product object's sales is updated by calling 
// the'updateTotalSales' function.				
			case 2:
				product2.updateTotalSales(quantitySold);
				break;
			
// If the value stored in 'productNumber' is equal to 3, the following Product object's sales is updated by calling 
// the'updateTotalSales' function.			
			case 3:
				product3.updateTotalSales(quantitySold);
				break;
				
// If the value stored in 'productNumber' is equal to 4, the following Product object's sales is updated by calling 
// the'updateTotalSales' function.				
			case 4:
				product4.updateTotalSales(quantitySold);
				break;
				
// If the value stored in 'productNumber' is equal to 5, the following Product object's sales is updated by calling 
// the'updateTotalSales' function.				
			case 5:
				product5.updateTotalSales(quantitySold);
				break;
// If the value stored in 'productNumber' is not an integer between 0 and 5, the following error message is displayed to the screen.				
			default:
				cout << "Invalid product number. Please try again." << endl;
				break;				
		}
// The following prompts the user for another product number and stores the value in the variable 'productNumber'.		
		cout << "Product number: ";
		cin >> productNumber;	
	}
	
// The following displays each Product object's total sales, including a dollar sign, two decimal place precision, and a field width of ten.	
	cout << endl;
	cout << "Total Sales" << endl;
	cout << "===========" << endl;
	
	cout << "Product 1: $" << setprecision(2) << setw(10) << product1.getTotalSales() << endl;
	cout << "Product 2: $" << setprecision(2) << setw(10) << product2.getTotalSales() << endl;
	cout << "Product 3: $" << setprecision(2) << setw(10) << product3.getTotalSales() << endl;
	cout << "Product 4: $" << setprecision(2) << setw(10) << product4.getTotalSales() << endl;
	cout << "Product 5: $" << setprecision(2) << setw(10) << product5.getTotalSales() << endl;
	
	return 0;
}

