

#include <string>

#include <iostream>

#include "Person.h"
using namespace std;

int main()
{
    Person person1("A123456789", "CAI", "Jason", "M", "2005-10-01");
    Person* person2 = new Person();
    person2->setid("B987654321");
    person2->setlastname("Wang");
    person2->setfirstname("Alice");
    person2->setgender("F");
    person2->setbirthDate("2005-12-31");

    person1.display();
    cout << endl;
    person2->display();
}
