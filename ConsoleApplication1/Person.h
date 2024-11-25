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
	string birthDate;

public:
	Person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthDate);
	Person();

	string getid()const;
	string getlastname()const;
	string getfirstname()const;
	string getgendername()const;
	string getbirthDate()const;

	void setid(const string& id);
	void setlastname(const string& lastname);
	void setfirstname(const string& firstname);
	void setgender(const string& gender);
	void setbirthDate(const string& birthDate);

	void display() const;
};


