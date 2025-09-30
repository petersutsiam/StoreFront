#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

class ShoppingCart {

private:
	User user;
	std::vector<Product> product;
	int ID;

public:
	void addOrder();

	void showCart();

	void clearCart();

	void placeOrder();
};

#endif
