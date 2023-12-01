#include "Order.h"
#include <iostream>
using namespace std;

int Order::orderCount = 1;

Order::Order(int _CustomerID)
{
    OrderID = orderCount++;
    CustomerID = CustomerID;
    itemCount = 0;
    TotalPrice = 0;
    itemCount = 0;
    TotalPrice = 0;
    OrderStatus = "False";
}
Order::~Order()
{
    // Perform any cleanup or deallocation of resources here
    // The destructor is automatically called when an Order object goes out of scope or is explicitly deleted
}

void Order::AddItem(MenuItem * item)
{
    this->ItemsOrdered[itemCount] = item;
    this->itemCount++;
}

// now is the function to remove the items from order list
void Order::RemoveItem(MenuItem* item)
{
    for (int i = 0; i < this->itemCount; i++) {
        if (ItemsOrdered[i]->getItemId() == item->getItemId()) {
            for (int j = i;j < this->itemCount - 1;j++)
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
    for (int i = 0; i < this->itemCount; i++) {
        this->TotalPrice += this->ItemsOrdered[i]->getItemPrice();
    }
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