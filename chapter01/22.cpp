#include <iostream>
#include "C:\Ѹ������\VisualStudio2012\1\Sales_item.h"
using namespace std;
int main()
{
	Sales_item total;
	if (cin >> total)
	{
		Sales_item trans;
		while (cin>>trans)
		{
			if (total.isbn() == trans.isbn())
			{
				total += trans;
		    }
			else
			{
				cout << total << endl;
				total = trans;
			}
			cout << total << endl;
		}	
	}
	else
	{
		cout << "No datas?" << endl;
		return -1;
	}
	return 0;
}