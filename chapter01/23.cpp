#include <iostream>
#include "C:\Ñ¸À×ÏÂÔØ\VisualStudio2012\1\Sales_item.h"
using namespace std;
int main()
{
	Sales_item currItem, valItem;
	if (cin >> currItem) {
		int cnt = 1;
		while (cin >> valItem) {
			if (currItem.isbn() == valItem.isbn()) {
				cnt += 1;
			}
			else {
				cout << currItem << " occurs " << cnt << " times. " << endl;
				currItem = valItem;
				cnt = 1;
			}
		}

	cout << currItem << " occurs " << cnt << " times. " << endl;
	}
	return 0;
}