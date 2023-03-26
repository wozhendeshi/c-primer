#include <iostream>
#include "Sales_data.h"
using namespace std;
int main()
{
	Sales_data total;
	double totalPrice;
	if (cin >> total.bookNo >> total.units_sold >> totalPrice) {
		total.CalcRevenue(totalPrice);
		Sales_data trans;
		double transPrice;
		while (cin >> trans.bookNo >> trans.units_sold >> transPrice) {
			trans.CalcRevenue(transPrice);
			if (total.bookNo == trans.bookNo) {
				total.AddData(trans);
			}
			else {
				total.Print();
				total.Setdata(trans);
			}
		}
		total.Print();
		return 0;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
}