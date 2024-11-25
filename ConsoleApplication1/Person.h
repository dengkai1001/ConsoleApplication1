#pragma once

#include <string>
using namespace std;

class Person
{
private:
	string id;
	string lastname;
	string firstname;
	string gender;
	string birthdDate;

public:
	Person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthDate);

	string getid()const;
	string getlastname()const;
	string getfirstname()const;
	string getgendername()const;
	string getbirthDate()const;
};

