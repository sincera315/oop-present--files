#pragma once
#include "MenuItem.h"
class Menu
{
private:
	MenuItem** itemList;  // 2d pointer array 
	int itemCount;  // item counter 
public:
	Menu(); 
	void AddMenuItem();
	void AddMenuItem(string, string, int, int, string);
	void RemoveItem(int );
	void UpdateStock(int, int);
	void ViewMenu(string customerType = "faculty");
	void initializeStudentMenu();
	void initializeFacultyMenu();
	void initializeNonFacultyMenu();
	MenuItem* getItemPtr(int);

	
};

