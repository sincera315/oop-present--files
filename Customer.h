#pragma once
#include "User.h"
#include "Menu.h"
using namespace std;

class Customer : protected User
{

public:
    
    Customer();
    ~Customer();
    void ViewMenu() const;
    void PlaceOrder() const;
    void view_order_history() const;
    void log_out() const;
    void rate() const;

};