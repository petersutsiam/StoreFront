#ifndef USER_H
#define USER_H

class User {

private:
	ShoppingCart shopping_Cart;
	Store store;
	std::vector<Order> order;
	std::vector<Payment> payment;
	std::vector<AnalyticsReport> analyticsReport;
	int ID;
public:
	string name;
	string address;
	int phone;
	int postalCode;
	string country;
	string city;
	string email;
	int userID;

public:
	void login();

	void logout();
};

#endif
