#ifndef STOCK_H
#define STOCK_H

class Stock {

private:
	Product product;
	int ID;
public:
	int avaliability;
	int recommendedLevel;
	int standardOrder;
	string supplierName;
	string supplierEmail;

	void showStock();

	void addStock();

	void editStock();

	void deleteStock();
};

#endif
