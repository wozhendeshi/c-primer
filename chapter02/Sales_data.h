#include <iostream>
#include <string>
using namespace std;
struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	void CalcRevenue(double price);  //计算总价
	double CalcAveragePrice();  //计算平均价格
	void Setdata(Sales_data data);  //添加数据
	void AddData(Sales_data data);  //增加数据
	void Print();  
};

void Sales_data::CalcRevenue(double price)
{
	revenue = units_sold * price;
}

void Sales_data::Setdata(Sales_data data)
{
	bookNo=data.bookNo;
	units_sold = data.units_sold;
	revenue = data.revenue;
}

void Sales_data::AddData(Sales_data data)
{
	if (bookNo!=data.bookNo) return ;
		units_sold+=data.units_sold;
		revenue+=data.revenue;	
}

double Sales_data::CalcAveragePrice()
{
	if (units_sold != 0)
		return revenue / units_sold;
	else
		return 0.0;
}

void Sales_data::Print()
{
	cout << bookNo << "  " << units_sold << " " << revenue << " ";
	double averagePrice = CalcAveragePrice();
	if (averagePrice != 0.0)
		cout << averagePrice << endl;
	else
		cout << " (no sales)" << endl;
}














