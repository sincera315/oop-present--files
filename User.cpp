#include "User.h"
#include<iostream>
#include <fstream>
using namespace std;


int User::userCount = 1;
User::User() : menu(nullptr), userID(++userCount), userName(""), password(""), userType("")
{
}

User::~User() 
{
    delete menu;
}
//file handling login, register
void User::login(const std::string& enteredUserName, const std::string& enteredPassword)
{

}

void User::registerUser(const std::string& newUserName, const std::string& newPassword, const std::string& newUserType)
{
   
}
