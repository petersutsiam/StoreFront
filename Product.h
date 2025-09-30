#ifndef PRODUCT_H
#define PRODUCT_H

class Product {

private:
	Franchise franchise;
	Store store;
	Category category;
	OrderItems orderItems;
	ShoppingCart shopping_Cart;
	std::vector<ProductPromotion> productPromotion;
	std::vector<Stock> stock;
	int ID;
public:
	String name;
	string description;
	double price;
	Integer image;
private:
	int stockQuantity;
	boolean isFranchiseScope;

public:
	void showProduct();

	void editProduct();

	void deleteProduct();

	void addProduct();
};

#endif
