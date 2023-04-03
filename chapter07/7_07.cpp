#include <iostream>
#include "C:\Users\∫¿À¨\Desktop\c++primer\chapter07\7_02_sales_data.h"
using namespace std;
int main() {
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while(read(cin,trans)){
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total);
	}
	else {
		cerr << "No data?!" << endl;
	}
	return 0;
}