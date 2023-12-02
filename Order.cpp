#include "Order.h"
#include <iostream>
#include<fstream>
using namespace std;

int Order::orderCount = 1;

Order::Order(int _CustomerID)
{
    OrderID = orderCount++;
    CustomerID = CustomerID;
    itemCount = 0;
    TotalPrice = 0;
    OrderStatus = "False";
}
Order::~Order()
{
    // Perform any cleanup or deallocation of resources here
    // The destructor is automatically called when an Order object goes out of scope or is explicitly deleted
}

void Order::AddItem(MenuItem* item)
{
    this->ItemsOrdered[itemCount] = item;
    this->itemCount++;
}

// now is the function to remove the items from order list
void Order::RemoveItem(MenuItem* item)
{
    for (int i = 0; i < this->itemCount; i++) 
    {
        if (ItemsOrdered[i]->getItemId() == item->getItemId()) 
        {
            for (int j = i; j < this->itemCount - 1; j++)
            {
                this->ItemsOrdered[j] = this->ItemsOrdered[j + 1];
            }
            break;
        }
    }
}

void Order::CalculateTotal()
{
    this->TotalPrice = 0;
    for (int i = 0; i < this->itemCount; i++) 
    {
        this->TotalPrice += this->ItemsOrdered[i]->getItemPrice();
    }
    cout << "The Total price is as follows:" <<TotalPrice<< endl;
}

void Order::ConfirmOrder()
{
    OrderStatus = "True";
    cout << "Order confirmed. Order ID: " << OrderID << endl;
}

void Order::CancelOrder()
{
    OrderStatus = "False";
    cout << "Order canceled. Order ID: " << OrderID << endl;
}

void Order::SaveOrderToFile() const 
{
    ofstream file("orders.txt",ios::app);

    if (file.is_open()) 
    {
        // Write order details
        file << "Order ID: " << OrderID << endl;
        file << "Order Status: " << OrderStatus << endl;
        //file << "User Type: " << userType << std::endl;
        file << "Items Ordered:" << endl;
        int i = 0;
        for (int i = 0; i < this->itemCount; i++)
        {
            file << "Item " << i + 1 << ": " << ItemsOrdered[i]->getItemName() << " - $" << ItemsOrdered[i]->getItemPrice() << endl;
        }

        file << "Total Price: $" << TotalPrice << endl;
        file << "------------------------------------------" << endl;

        file.close();
    }
    else {
        std::cout << "Unable to open the file for saving the order." << endl;
    }
}

void Order::OrderHistory()
{
    cout << "*******************************************************" << endl;
    ifstream file("orders.txt");

    if (file.is_open())
    {
        cout << "Order History:" << endl;
        string line;

        while (getline(file, line))
        {
            cout << line << endl;
        }

        file.close();
    }
    else
    {
        cout << "Unable to open the file for reading order history." << endl;
    }
    cout << "*******************************************************" << endl;
}
