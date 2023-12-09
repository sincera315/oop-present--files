#include "User.h"
#include "Menu.h"
#include "Customer.h"
#include "Order.h"
#include "Rating.h"
#include "CafeStaff.h"
#include <iostream>
#include <limits>
#include "Administrator.h"
using namespace std;
int main() 
{
    // aggregation 
    Menu* globalMenu = new Menu(); // dynamic allocation 
    globalMenu->initializeFacultyMenu();
    globalMenu->initializeNonFacultyMenu();
    globalMenu->initializeStudentMenu();
    // less memory
   // if admin make a change in menue it will reflect to all users 
    Administrator admin(globalMenu);
    int choice = 0, select = 0;
    //declaration of user class.
    User newUser, loginUser;
    //asking the viewer about his/her information.
    ////////////////////////////////////////////////////
    cout << "**********************************************************" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "             "<<"Welcome to La Vida Cafe!" << endl;
    cout << "----------------------------------------------------------" << endl;
    cout << "**********************************************************" << endl << endl;

    do {
        cout << "**********************************************************" << endl;
        cout << "----------------------------------------------------------" << endl;
        cout << "             "<< "Please choose an option:" << endl;
        cout << "             "<< "1. Register as a new user" << endl;
        cout << "             "<< "2. Login" << endl;
        cout << "             "<< "0. Exit" << endl;
        cout << "**********************************************************" << endl;
        cout << "----------------------------------------------------------" << endl << endl;
        cout << "             " << "Enter your choice: "; 
        cin >> choice;
        switch (choice)
        {
            case 1:
            {
                cout << "**********************************************************" << endl;
                cout << "----------------------------------------------------------" << endl;
                cout << "             " << "You are now registering as a new user to our cafe system: " << endl;
                string newUserName, newPassword, newUserType;
                cout << "Enter new username: ";
                cin >> newUserName;
                cout << "Enter new password: ";
                cin >> newPassword;
                cout << "----------------------------------------------------------" << endl;
                cout << "**********************************************************" << endl << endl;

                cout << "             "<< "Please choose a user type:" << endl;
                cout << "             "<< "1. Customer" << endl;
                cout << "             "<< "2. Cafe Staff" << endl;
                cout << "             "<< "3. Administrator" << endl;
                cout << "----------------------------------------------------------" << endl;
                cout << "**********************************************************" << endl << endl;
                cin >> select;

                switch (select)
                {
                    case 1:
                    {
                        newUserType = "Customer";
                        // Creating a Customer object
                        Customer c1;
                        break;
                    }
                    case 2:
                    {
                        newUserType = "CafeStaff";
                        CafeStaff cafeStaff;
                        break;
                    }
                    case 3:
                    {
                        newUserType = "Administrator";
                        // Administrator admin;
                        break;
                    }
                    default:
                    {
                        cout << "Invalid user type. Please try again." << endl;
                        continue;
                        // Go back to the main menu
                    }
                }

                // Register the new user
                newUser.registerUser(newUserName, newPassword, newUserType);
                break;
     
            }
            case 2:
            {
                cout << "**********************************************************" << endl;
                cout << "----------------------------------------------------------" << endl;
                cout << "             " << "You are now logging in to our cafe system: " << endl;
                string enteredUserName, enteredPassword;
                cout << "             " << "Enter username for login: ";
                cin >> enteredUserName;
                cout << "             " << "Enter password for login: ";
                cin >> enteredPassword;
                cout << "----------------------------------------------------------" << endl;
                cout << "**********************************************************" << endl << endl;
                // Test login
                loginUser.login(enteredUserName, enteredPassword);
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
            cout << "**********************************************************" << endl;
            cout << "----------------------------------------------------------" << endl;
        }

        // Clear the input buffer
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    } while (choice != 0);

    // Deallocate memory for globalMenu
    delete globalMenu;

    return 0;
}

    




