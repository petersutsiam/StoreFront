#ifndef STORE_H
#define STORE_H

class Store {

private:
	Franchise franchise;
	std::vector<User> user;
	std::vector<Product> product;
	std::vector<Promotion> promotion;
	std::vector<AnalyticsReport> analyticsReport;
	int ID;
	string name;
	string location;
	int managerID;

public:
	void addLocalProduct();

	void removeLocalProduct();

	void manageStock();

	void manageStorePromotion();
};

#endif
