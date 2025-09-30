#ifndef ANALYTICSREPORT_H
#define ANALYTICSREPORT_H

class AnalyticsReport {

private:
	Franchise franchise;
	Store store;
	User user;
	std::vector<AnalyticsData> analyticsData;
	int ID;
	String name;
	String type;
	Timestamp generatedDate;
};

#endif
