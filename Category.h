#ifndef CATEGORY_H
#define CATEGORY_H

class Category {

private:
	std::vector<Product> product;
	int ID;
	String name;

public:
	void addCategory();

	void editCategory();

	void deleteCategory();

	void showCategory();
};

#endif
