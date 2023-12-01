#pragma once
#include "Menu.h"
#include "User.h"
// inherit from user 
class Administrator : private User
{

public:
	Administrator(Menu*);
	void ViewMenu();
	void AddMenuItem();
	void RemoveMenueItem();
	void ManageInventory();
	void saveMenuToFile();
	void ViewMenueFromFile();


};

