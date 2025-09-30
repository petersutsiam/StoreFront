#ifndef ORDERITEMS_H
#define ORDERITEMS_H

class OrderItems {

private:
	Order order;
	Product product;
	int ID;
public:
	int OrderID;
	int ProductID;
	int quantity;

	void addItem();

	void getPrice();
};

#endif
