// Casey Sova 10/2/2022
// Week 6 Homework
// Create a program that calculates and displays the total retail values for a series of sales transactions input by a user.

#include <string>

class Product {
	
private:

// The following is the initialization of the two private double data members only used in the Product class.
	double productPrice;
	double totalSales;

public:	

// The following is the one-argument constructor along with it's member initializer.	
	Product(double newProductPrice)
		: productPrice{newProductPrice} {
	}
	
// The following four member functions are the appropriate setter and getter member functions for each data member in the class.	
	void setProductPrice(double price) {
		productPrice = price;
	}
	
	double getProductPrice() const {
		return productPrice;
	}
	
	void setTotalSales(double sales) {
		totalSales = sales;
	}
	
	double getTotalSales() const {
		return totalSales;
	}
	
// The following is the 'updateTotalSales' function. This function uses one integer parameter representing the quantity sold,
// and does not return a value.	
	void updateTotalSales(int quantitySold) {
		
// The following calculates the total value of the sale by multiplying the quantity sold and the product's price. 		
		double total = quantitySold * getProductPrice();
		
// The following updates the product's total sales by adding the already existing sales by the total previously calculated.		
		setTotalSales(getTotalSales() + total);
	}
};

