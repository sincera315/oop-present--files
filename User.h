#pragma once
#include <iostream>
#include <string>
using namespace std;

class User
{
protected:
    Menu* menu;
    static int userCount;
    int userID;
    string userName;
    string password;
    string userType;
public:
    User();
    ~User();
    User(const string& userName, const string& password, const string& userType);
    void displayInfo() const;
    virtual void showMenu() const;
    const string& getUserType() const;
    const int getuserid() const;
};