
#include <string>

class Product {
	
private:

	double productPrice;
	double totalSales;

public:	
	
	Product(double newProductPrice)
		: productPrice{newProductPrice} {
	}
		
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
		
	void updateTotalSales(int quantitySold) {
				
		double total = quantitySold * getProductPrice();
				
		setTotalSales(getTotalSales() + total);
	}
};

