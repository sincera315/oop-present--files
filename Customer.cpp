#include "Customer.h"
#include "Order.h"
#include "Rating.h"

Customer::Customer()
{
    //menu = new Menu();
    int choice1 = 0, choice2 = 0;
    int loop_variable = 1;
    cout << "You are now logged in as a customer. PRESS" << endl;
    cout << "" << endl;
    do {
        cout << "_________________________________________ ______" << endl;
        cout << "1 Student " << endl;
        cout << "2 Faculty" << endl;
        cout << "3 Nonfaculty" << endl;
        cout << "_______________________________________________" << endl;

        cin >> choice1;

        // Clear the input buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // it is the choice menu for students
        if (choice1 == 1)
        {
            type = "student";
            do {
                cout << "_____________________________________________________________" << endl;
                cout << "Enter the following number for the choice you want: " << endl;
                cout << "1 view menu  " << endl;
                cout << "2 place order" << endl;
                cout << "3 view_order_history" << endl;
                cout << "4 log_out" << endl;
                cout << "5 Go back" << endl;
                cout << "_______________________________________________" << endl;

                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    ViewMenu();
                    break;
                case 2:
                    PlaceOrder();
                    break;
                case 3:
                    view_order_history();
                    break;
                case 4:
                    log_out();
                    break;
                case 5:
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while (choice2 != 5);
        }
        // it is the choice menu for faculty.
        else if (choice1 == 2)
        {
            type = "faculty";
            do
            {
                cout << "_____________________________________________________________" << endl;
                cout << "Enter the following number for the choice you want: " << endl;
                cout << "1 view menu  " << endl;
                cout << "2 place order" << endl;
                cout << "3 view_order_history" << endl;
                cout << "4 log_out" << endl;
                cout << "5 Go back" << endl;
                cout << "_______________________________________________" << endl;

                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    ViewMenu();
                    break;
                case 2:
                    PlaceOrder();
                    break;
                case 3:
                    view_order_history();
                    break;
                case 4:
                    log_out();
                    break;
                case 5:
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while (choice2 != 5);
        }
        // it is the choice menu for non faculty.
        else if (choice1 == 3)
        {
            type = "nonfaculty";
            do {
                cout << "_____________________________________________________________" << endl;
                cout << "Enter the following number for the choice you want: " << endl;
                cout << "1 view menu  " << endl;
                cout << "2 place order" << endl;
                cout << "3 view_order_history" << endl;
                cout << "4 log_out" << endl;
                cout << "5 Go back" << endl;
                cout << "_______________________________________________" << endl;

                cin >> choice2;

                switch (choice2)
                {
                case 1:
                    ViewMenu();
                    break;
                case 2:
                    PlaceOrder();
                    break;
                case 3:
                    view_order_history();
                    break;
                case 4:
                    log_out();
                    break;
                case 5:
                    break;
                default:
                    cout << "Invalid choice. Please try again." << endl;
                }
            } while (choice2 != 5);
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Do you want to continue? Enter 1 to continue, 0 to stop: ";
        cin >> loop_variable;

    } while (loop_variable == 1);


}
Customer::~Customer() {}

////first initializing so we can call the add remove and view functions

void Customer::ViewMenu() const
{
    this->menu->ViewMenu(type);
}

void Customer::PlaceOrder() const
{
    // Composition.
    Order order1(this->userID);
    int choice = 0;
    int confirm = 0;
    int itemID;
    MenuItem* ptr = nullptr; // Declare the pointer outside the switch statement.

    do {
        cout << "_____________________________________________________________" << endl;
        cout << "Enter the following number for the choice you want: " << endl;
        cout << "1 Add Items  " << endl;
        cout << "2 Remove Items" << endl;
        cout << "3 Calculate Total" << endl;
        cout << "4 Order Confirmation" << endl;
        cout << "5 Exit" << endl;
        cout << "_______________________________________________" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter ItemID:";
            cin >> itemID;
            ptr = this->menu->getItemPtr(itemID);
            order1.AddItem(ptr);
            break;
        case 2:
            cout << "Enter ItemID:";
            cin >> itemID;
            ptr = this->menu->getItemPtr(itemID);
            order1.RemoveItem(ptr);
            break;
        case 3:
            order1.CalculateTotal();
            break;
        case 4:
            cout << "Enter 1 for order confirmation, 0 for order removal." << endl;
            cin >> confirm;
            if (confirm == 1)
            {
                order1.ConfirmOrder();
            }
            else
            {
                order1.CancelOrder();
                // It will then further move through file handling.
            }
            break;
        case 5:
            cout << "Exiting the order menu." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);
}


void Customer::view_order_history() const
{
    cout << "Viewing order history for user: " << endl;
}

void Customer::log_out() const
{
    cout << "Logging out user: " << endl;
}

void Customer::rate() const
{
    Rating rating;
    rating.Rate();
    rating.SaveToFile();

}
