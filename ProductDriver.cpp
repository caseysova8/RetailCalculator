
#include <iomanip>
#include <iostream>
#include "Product.h"

using namespace std;

int main() {
		
	cout << fixed;
		
	int productNumber;
	int quantitySold;
		
	Product product1(2.98);
	Product product2(4.50);
	Product product3(9.98);
	Product product4(4.29);
	Product product5(8.67);
		
	cout << "Product number: ";
	cin >> productNumber;
		
	while (productNumber != 0) {
				
		cout << "Quantity sold: ";
		cin >> quantitySold;
			
		switch (productNumber) {
					
			case 1:
				product1.updateTotalSales(quantitySold);
				break;
								
			case 2:
				product2.updateTotalSales(quantitySold);
				break;
						
			case 3:
				product3.updateTotalSales(quantitySold);
				break;
								
			case 4:
				product4.updateTotalSales(quantitySold);
				break;
								
			case 5:
				product5.updateTotalSales(quantitySold);
				break;
				
			default:
				cout << "Invalid product number. Please try again." << endl;
				break;				
		}		
		cout << "Product number: ";
		cin >> productNumber;	
	}
		
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

