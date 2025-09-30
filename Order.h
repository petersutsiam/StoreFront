#ifndef ORDER_H
#define ORDER_H

class Order {

private:
	User userID2;
	std::vector<OrderItems> orderItems;
	int ID;
public:
	Integer UserID;

	void showOrder();

	void updateOrders();
};

#endif
