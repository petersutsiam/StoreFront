#ifndef FRANCHISE_H
#define FRANCHISE_H

class Franchise {

private:
	std::vector<Product> Product;
	std::vector<Store> store;
	std::vector<Promotion> promotion;
	std::vector<AnalyticsReport> analyticsReport;
	int ID;
	string name;
	string hqLocation;

public:
	void addStore();

	void removeStore();

	void manageFranchisePromotion();

	void manageFranchiseProducts();
};

#endif
