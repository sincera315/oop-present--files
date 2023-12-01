#include "Menu.h"

Menu::Menu() {
	this->itemList = new MenuItem*[1000];
	//int* itemlist=new
	this->itemCount =0;
}

void Menu::ViewMenu(string userType) {
	cout << "\n\nDisplaying Menu\n" << endl;
	if (userType == "nonfaculty" || userType == "student") {
		for (int i = 0; i < this->itemCount; i++) {
	
			if (this->itemList[i]->getCustomerType() == userType) {
				cout <<"*****************************************" << endl;
				cout <<*this->itemList[i];
			}
		}
	}
	else {
		for (int i = 0; i < this->itemCount; i++) {
			cout << "*****************************************" << endl;
			cout << *this->itemList[i];
			if (userType == "admin" || userType=="staff") {
				cout << "Available Quantity:" << this->itemList[i]->getQuantity() << endl;
				cout << "Customer Type:" << this->itemList[i]->getCustomerType()<<endl;
			}
			
		}
	}
	cout << endl;

}

void Menu::AddMenuItem() {
	this->itemList[this->itemCount] = new MenuItem();
	this->itemCount++;
}

void Menu::AddMenuItem(string _itemName, string _itemDescription, int _price, int _quantityInStock, string _customerType) {
	this->itemList[this->itemCount] = new MenuItem(_itemName, _itemDescription, _price, _quantityInStock, _customerType);
	this->itemCount++;
}
// function for removing the item 
void Menu::RemoveItem(int itemId)
{

	bool itemFound = false; 
	
	for (int i = 0;i < this->itemCount;i++)
	{
		if (this->itemList[i]->getItemId() == itemId)
		{
			delete this->itemList[i];

			// shift the remaing elemnt to remove the gap 
			for (int j = i;j < this->itemCount - 1;j++)
			{
				this->itemList[j] = this->itemList[j + 1];
			}

			itemFound = true;
			break;
		}
	}
	if (itemFound)
	{
		cout << "item removed successful" << endl;
		itemCount--; // decremnting 

	}
	else
	{
		cout << "item not Found" << endl;
	}


}

MenuItem* Menu::getItemPtr(int itemID) {
	for (int i = 0; i < this->itemCount; i++) {
		if (this->itemList[i]->getItemId() == itemID) {
			return this->itemList[i];
		}
	}
	cout << "Item Not Found!" << endl;
	return NULL;
}
void Menu::UpdateStock(int itemID, int quantity) {
	bool itemFound = false;
	for (int i = 0; i < this->itemCount; i++) {
		if (this->itemList[i]->getItemId() == itemID) {
			this->itemList[i]->UpdateStock(quantity);
			itemFound = true;
			break;
		}
	}
	if (itemFound==false) {
		cout << "Item Id Not Found!" << endl;
	}

}

void Menu::initializeStudentMenu() {

	this->AddMenuItem("Bbq Pizza", "", 1200, 5, "student");
	this->AddMenuItem("Zinger Burger", "", 360, 7, "student");
	this->AddMenuItem("Tikka Boti", "", 200, 3, "student");
	this->AddMenuItem("Chow Mein", "", 360, 1, "student");
	this->AddMenuItem("Loaded Fries", "", 150, 6, "student");
	this->AddMenuItem("Afghani Burger", "", 180, 6, "student");
}
void Menu::initializeFacultyMenu() {
	this->AddMenuItem("Pizza", "", 800, 5, "faculty");
	this->AddMenuItem("Zinger Burger", "", 360, 7, "faculty");
	this->AddMenuItem("Tikka Boti", "", 200, 3, "faculty");
	this->AddMenuItem("Shrimp Fried Rice", "", 360, 1, "faculty");
	this->AddMenuItem("Loaded Fries", "", 150, 6, "faculty");

}
void Menu::initializeNonFacultyMenu() {

	this->AddMenuItem("Pizza", "", 800, 5, "nonfaculty");
	this->AddMenuItem("Zinger Burger", "", 360, 7, "nonfaculty");
	this->AddMenuItem("Tikka Boti", "", 200, 3, "nonfaculty");
	this->AddMenuItem("Shrimp Fried Rice", "", 360, 1, "nonfaculty");
	this->AddMenuItem("Loaded Fries", "", 150, 6, "nonfaculty");
	this->AddMenuItem("Chocolate Cake", "", 220, 6, "nonfaculty");
	this->AddMenuItem("Egg Fried Rice", "", 330, 6, "nonfaculty");
}

