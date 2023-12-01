#pragma once
#include "MenuItem.h"
using namespace std;

class Order
{
private:
	static int orderCount;
	int OrderID;// file handling.
	int CustomerID;
	MenuItem* ItemsOrdered[100];
	int itemCount;
	double TotalPrice;
	string OrderStatus;

public:
	Order(int);
	~Order();
	void AddItem(MenuItem*);
	void RemoveItem(MenuItem*);
	void CalculateTotal();
	void ConfirmOrder();
	void CancelOrder();

};