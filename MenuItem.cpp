#include "MenuItem.h"

// STATIC VARIABLE INITILAIZED 
int MenuItem::itemCount = 0;

// default constructor (not recommended for initializing menu items)
MenuItem::MenuItem() {
	this->itemId = itemCount;
	itemCount++;
}

// parameterized constructor (recommended for initializing menu items)
MenuItem::MenuItem(string _itemName, string _itemDescription, int _price, int _quantityInStock, string _customerType) {
	this->itemId = itemCount;
	this->itemName = _itemName;
	this->itemDescription = _itemDescription;
	this->price = _price;
	this->quantityInStock = _quantityInStock;
	this->customerType = _customerType;
	itemCount++;
}

// default constructor 
//MenuItem::MenuItem()
//{
//	this->itemId = itemCount;
//	cout << "Enter item Name:";
//	cin >> itemName;
//	cout << "Enter item Description:";
//	cin >> itemDescription;
//	cout << "Enter the price:";
//	cin >> price;
//	cout << "Enter the quantity in stock:";
//	cin >> quantityInStock;
//	cout << "Enter the Customer Type:";
//	cin >> customerType;
//	itemCount++;
//
//}
// paremetrized constructor 
//MenuItem::MenuItem(string _itemName, string _itemDescription, int _price, int _quantityInStock, string _customerType)
//{
//	this->itemId = itemCount;
//	this->itemName = _itemName;
//	this->itemDescription = _itemDescription;
//	this->price = _price;
//	this->quantityInStock = _quantityInStock;
//	this->customerType = _customerType;
//	this->itemCount++;
//}


bool MenuItem::UpdateStock(int count) {
	if (count > 0) {
		this->quantityInStock += count;
		return true;
	}
	else if (this->quantityInStock + count >= 0) {
		this->quantityInStock += count;
		return true;
	}
	return false;
}

string MenuItem::getCustomerType() {
	return this->customerType;
}

int MenuItem::getItemId() {
	return this->itemId;
}

void  MenuItem::setName(string _name)
{
	this->itemName = _name;
}
string MenuItem::getItemName()
{
	return this->itemName;
}
void MenuItem::setItemPrice(int _price)
{
	this->price = _price;
}
int MenuItem::getItemPrice()
{
	return this->price;
}

int MenuItem::getQuantity()
{
	return this->quantityInStock;
}
