/*
* Test-driven development can be described using the following steps:
*
* 1. Write a single unit test for a single piece of the program
* 2. Run the unit test, expecting it to fail
* 3. Write the simplest possible code to pass the unit test
* 4. Refactor existing code as needed
* 5. Repeat steps 2 to 4 until the program is complete
*/

#include <cassert>
#include <iostream>
#include "PhoneBook.hpp"

/* UNIT TESTS */

void unitTestPhoneBookConstructor() {
    string year = "2017";
    PhoneBook phoneBook(year);
    assert(typeid(phoneBook) == typeid(PhoneBook));
}

void unitTestPhoneBookYear() {
    string year = "2012";
    PhoneBook phoneBook(year);
    assert(phoneBook.year == year);
}

void unitTestPhoneBookAddContact() {
    string year = "1998", name = "Guy Fieri", number = "888-4-FLAVOR";
    PhoneBook phoneBook(year);
    bool result = phoneBook.addContact(name, number);
    assert(result == true);
}

void unitTestPhoneBookAddDuplicateContact() {
    string year = "1978", name = "George Washington", number = "123-456-7890";
    PhoneBook phoneBook(year);
    bool result = phoneBook.addContact(name, number);
    assert(result == true);
    bool nextResult = phoneBook.addContact(name, number);
    assert(nextResult == false);
}

void unitTestPhoneBookGetContact() {
    string year = "2023", name = "Sam Smith", number = "456-7-UNHOLY";
    PhoneBook phoneBook(year);
    bool result = phoneBook.addContact(name, number);
    assert(result == true);
    string numberFromName = phoneBook.getContactNumber(name);
    assert(numberFromName == number);
}

/* CLASS METHOD DEFINITIONS */

bool PhoneBook::addContact(string name, string number) {
    if (contacts.find(name) == contacts.end()) {
        contacts[name] = number;
        return true;
    }
    return false;
}

string PhoneBook::getContactNumber(string name) {
    return contacts[name];
}

/* MAIN FUNCTION */

int main() {
    unitTestPhoneBookConstructor();

    unitTestPhoneBookYear();

    unitTestPhoneBookAddContact();

    unitTestPhoneBookAddDuplicateContact();

    unitTestPhoneBookGetContact();

    cout << "The program completed successfully" << endl;

    return 0;
}