#include <iostream>
using namespace std;
#include "Menu.h"
#include "Administrator.h"
int main() {
    // aggregation 
	Menu* globalMenu = new Menu(); // dynamic allocation 
    globalMenu->initializeFacultyMenu();
    globalMenu->initializeNonFacultyMenu();
    globalMenu->initializeStudentMenu();
    // less memory
   // if admin make a change in menue it will reflect to all users 
	Administrator admin(globalMenu);
    cout << "Welcome to La Vida Cafe!" << endl;

    int choice;
    do {
        cout << "\nPlease choose an option:" << endl;
        cout << "1. View Menu as Student" << endl;
        cout << "2. View Menu as Faculty" << endl;
        cout << "3. View Menu as NonFaculty" << endl;
        cout << "4. View Menu as Admin" << endl;
        cout << "5. Add Item in Menu by Admin" << endl;
        cout << "6. Manage Inventory in Menu by Admin" << endl;
        cout << "7. Remove Item from Menue by Admin" << endl;

        cout << "enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                (*globalMenu).ViewMenu("student");
                break;
            case 2:
                (*globalMenu).ViewMenu("faculty");
                break;
            case 3:
                (*globalMenu).ViewMenu("nonfaculty");
                break;
            case 4:
                (*globalMenu).ViewMenu("admin");
                break;
            case 5:
                admin.AddMenuItem();
                break;
            case 6:
                admin.ManageInventory();
                break;
            case 7:
                admin.RemoveMenueItem();
                break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (choice != 0);

    return 0;
}
