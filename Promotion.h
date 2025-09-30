#ifndef PROMOTION_H
#define PROMOTION_H

class Promotion {

private:
	Store store;
	Franchise franchise;
	std::vector<ProductPromotion> productPromotion;
	int ID;
	string description;
	string discountType;
	string discountValue;
	date startDate;
	date endDate;
	boolean isFranchiseScope;

public:
	void applyPromotion();

	void validatePromotion();
};

#endif
