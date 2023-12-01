//#include <iostream>
//using namespace std;
//#include "Menu.h"
//#include"Rating.h"
//#include "Administrator.h"
//int main() {
//    // aggregation 
//    Menu* globalMenu = new Menu(); // dynamic allocation 
//    globalMenu->initializeFacultyMenu();
//    globalMenu->initializeNonFacultyMenu();
//    globalMenu->initializeStudentMenu();
//    // less memory
//   // if admin make a change in menue it will reflect to all users 
//    Administrator admin(globalMenu);
//    cout << "Welcome to La Vida Cafe!" << endl;
//
//    int choice;
//    do {
//        cout << "\nPlease choose an option:" << endl;
//        cout << "1. View Menu as Student" << endl;
//        cout << "2. View Menu as Faculty" << endl;
//        cout << "3. View Menu as NonFaculty" << endl;
//        cout << "4. View Menu as Admin" << endl;
//        cout << "5. Add Item in Menu by Admin" << endl;
//        cout << "6. Manage Inventory in Menu by Admin" << endl;
//        cout << "7. Remove Item from Menue by Admin" << endl;
//
//        cout << "enter your choice: ";
//        cin >> choice;
//
//        switch (choice)
//        {
//        case 1:
//            (*globalMenu).ViewMenu("student");
//            break;
//        case 2:
//            (*globalMenu).ViewMenu("faculty");
//            break;
//        case 3:
//            (*globalMenu).ViewMenu("nonfaculty");
//            break;
//        case 4:
//            (*globalMenu).ViewMenu("admin");
//            break;
//        case 5:
//            admin.AddMenuItem();
//            break;
//        case 6:
//            admin.ManageInventory();
//            break;
//        case 7:
//            admin.RemoveMenueItem();
//            break;
//        }
//        cin.clear();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
//    } while (choice != 0);
//
//    return 0;
//}

#include "User.h"
#include "Menu.h"
#include "Customer.h"
#include "Order.h"
#include "Rating.h"
//#include "CafeStaff.h"
#include <iostream>
#include <limits>

using namespace std;
// these are the members of the class which were created statically.
static int nextOrderID;
static int RatingID;

int main()
{
    cout << "Welcome to La Vida Cafe!" << endl;
    int choice;
    do {
        cout << "\nplease choose an option:" << endl;
        cout << "1. login as a customer" << endl;
        cout << "2. login as cafe staff" << endl;
        cout << "3. login as administrator" << endl;
        cout << "0. exit" << endl;
        cout << "enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            // Creating a Customer object
            Customer c1;

        }
        break;
        case 2:
        {
            break;
        }
        case 3:
        {
            // Implement login for administrator
            break;
        }
        case 0:
        {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (choice != 0);

    return 0;
}
