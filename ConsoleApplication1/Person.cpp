#include "Person.h"
#include <string>
using namespace std;

Person::Person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthDate)
{
	this->id = id;
	this->lastname = lastname;
	this->firstname = firstname;
	this->gender = gender;
	this->birthDate = birthDate;
}

string person::getid() const
{
	return id;
}

string person::getlastname() const
{
	return lastname;
}

string person::getfirstname() const
{
	return firstname;
}

string person::getgendername() const
{
	return gender;
}

string person::getbirthDate() const
{
	return birthDate;
}
