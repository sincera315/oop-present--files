#pragma once
#include<iostream>
#include<fstream> // header file for file handling 
using namespace std;

class FileManager
{
private:
	string FileName;
	

public:
	void saveUserToFile()
	{
		fstream File;
		File.open("Filename", ios::out);
		if (!File)
		{
			cout << "Error in file opening ";
		}
		else
		{
			cout << "writng the data to file ";
		
		}

	}

};

