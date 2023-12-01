#include "Administrator.h"

Administrator::Administrator(Menu* _menu) {
	this->menu = _menu;
}
void Administrator::ViewMenu() {
	this->menu->ViewMenu("admin");
}
void Administrator::AddMenuItem() {
	this->menu->AddMenuItem();
}
void Administrator::RemoveMenueItem() {
	int item_id;
    cout << "Enter Item ID you want to remove:";
	cin >> item_id;
	this->menu->RemoveItem(item_id);
}

void Administrator::ManageInventory() {
	int item_id, quantity;
	cout << "Enter Item ID to Update Stock:";
	cin >> item_id;
	cout << "Enter Quantity to Update Stock(+ve to add and -ve to Subtract):";
	cin >> quantity;
	this->menu->UpdateStock(item_id, quantity);
}
void Administrator::saveMenuToFile()
{


}