#include <map>

using namespace std;

/* UNIT TEST DECLARATIONS */

void unitTestPhoneBookConstructor();

void unitTestPhoneBookYear();

void unitTestPhoneBookAddContact();

void unitTestPhoneBookAddDuplicateContact();

void unitTestPhoneBookGetContact();

/* CLASS DECLARATION */

class PhoneBook {
public:
    string year;

    PhoneBook(string year) {
        this->year = year;
    }

    bool addContact(string name, string number);

    string getContactNumber(string name);

private:
    map<string, string> contacts;
};