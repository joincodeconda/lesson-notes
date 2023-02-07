#include <map>

using namespace std;

/* UNIT TEST DECLARATIONS */

void UnitTestPhoneBookConstructor();

void UnitTestPhoneBookYear();

void UnitTestPhoneBookAddContact();

void UnitTestPhoneBookAddDuplicateContact();

void UnitTestPhoneBookGetContact();

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