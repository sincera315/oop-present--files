#include "User.h"

int User::userCount = 1;

User::User() 
{
    cout << "Enter User Name: ";
    cin >> userName;

    cout << "Enter User Password: ";
    cin >> password;

    cout << "Enter User Type (student, faculty, staff, admin): ";
    cin >> userType;

    userCount++;
    userID = userCount;
}

User::~User() {
    // Destructor implementation
}
User::User(const string& userName, const string& password, const string& userType) : userName(userName), password(password), userType(userType) {}

void User::displayInfo() const
{
    cout << "User ID: " << userID << ", User Name: " << userName << ", User Type: " << userType << endl;
}

void User::showMenu() const
{
    cout << "Default Menu: No specific options for this user type." << endl;
}

const string& User::getUserType() const
{
    return userType;
}

const int User::getuserid() const {
    return userID;
}
//file handling login, register
