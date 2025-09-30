#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee : User {

private:
	string role;
	boolean permession;

public:
	void isAdmin();

	void operation();

	void managerUsers();

	void manageProducts();

	void manageOrders();

	void managePromotions();

	void generateReports();
};

#endif
