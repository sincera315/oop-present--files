#include "Rating.h"
#include <iostream>
#include <fstream>
using namespace std;
int Rating::RatingID = 1;

Rating::Rating() : User()
{
    MenuItemID = 0;
    CustomerID = userID;
    Score = 0;
    Comment = " ";
    RatingID++;
    // Default constructor implementation
}

Rating::~Rating()
{
    // Destructor implementation
}

void Rating::Rate()
{
    // Taking input for each attribute
    cout << "RatingID: " << RatingID << endl;

    cout << "Enter MenuItemID: " << MenuItemID << endl;

    cout << "Enter CustomerID: " << CustomerID << endl;
    // this portion will give the rating of the entire program.
    cout << "Enter Score (1-5): ";
    cin >> Score;

    cout << "Enter Score: ";
    cin >> Score;
    if (Score == 1)
    {
        rating = "*";
        cout << rating;
    }
    else if (Score == 2)
    {
        rating = "**";
    }
    else if (Score == 3)
    {
        rating = "***";
    }
    else if (Score == 4)
    {
        rating = "****";
    }
    else if (Score == 5)
    {
        rating = "*****";
    }


    cout << "Enter Comment: ";
    /////////////////////////////////
    cin.ignore(); // Clear the input buffer
    getline(cin, Comment);
}
void Rating::SaveToFile()
{
    ofstream outputFile("ratings.txt", ios::app);

    if (!outputFile.is_open())
    {
        cerr << "Error opening the file." << endl;
        return;
    }

    outputFile << "RatingID: " << RatingID << endl;
    outputFile << "MenuItemID: " << MenuItemID << endl;
    outputFile << "CustomerID: " << CustomerID << endl;
    outputFile << "Score: " << Score << endl;
    outputFile << "Comment: " << Comment << endl;

    outputFile.close();
}
