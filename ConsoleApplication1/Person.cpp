#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

//Person::Person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthDate)
//{
	//this->id = id;
	//this->lastname = lastname;
	//this->firstname = firstname;
	//this->gender = gender;
	//this->birthDate = birthDate;
//}

Person::Person(const string& id, const string& lastname, const string& firstname, const string& gender, const string& birthDate) : id(id), lastname(lastname), firstname(firstname), gender(gender), birthDate(birthDate)
{

}
Person::Person()
{
}
string Person::getid() const
{
	return id;
}

string Person::getlastname() const
{
	return lastname;
}

string Person::getfirstname() const
{
	return firstname;
}

string Person::getgendername() const
{
	return gender;
}

string Person::getbirthDate() const
{
	return birthDate;
}

void Person::setid(const string& id)
{
	this->id = id;
}

void Person::setlastname(const string& lastname)
{
	this->lastname = lastname;
}

void Person::setfirstname(const string& firstname)
{
	this->firstname = firstname;
}

void Person::setgender(const string& gender)
{
	this->gender = gender;
}

void Person::setbirthDate(const string& birthDate)
{
	this->birthDate = birthDate;
}

void Person::display() const
{
	cout << "ID:" << id << endl;
	cout << "Last Name:" << lastname << endl;
	cout << "Fisrt Name:" << firstname << endl;
	cout << "Gener:" << gender << endl;
	cout << "BirthDate:" << birthDate << endl;
}
