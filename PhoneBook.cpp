// Suryakiran Santhosh
// CSIS 137 Tuesday Night class
// FINAL PROJECT PHONEBOOK APP

#include "PhoneBook.h"

// constructor
PhoneBook::PhoneBook(Contact inputContact)
{
    //addToPhoneBook(inputContact);
}

// destructor
PhoneBook::~PhoneBook()
{
    phoneBook.clear();
}

void PhoneBook::addToPhoneBook(Contact inputContact)
{
    phoneBook.push_back(inputContact);
}
bool PhoneBook::removeFromPhoneBook(Contact inputContact)
{
    bool validData = true;
    for (unsigned int x = 0; x < phoneBook.size(); x++)
    {
        if (inputContact.getContactName() == phoneBook[x].getContactName())
        {
            phoneBook.erase(phoneBook.begin() + x);
            validData = true;
        }
        else
        {
            x++;
            validData = false;
        }
    }
    return validData;
}
void PhoneBook::printPhoneBook() // hard copy version
{
    ofstream PhoneBookHardCopy;
    PhoneBookHardCopy.open("PhoneBookHardCopy.txt");
    PhoneBookHardCopy << "PHONEBOOK DIRECTORY" << endl
                      << "-------------------" << endl;
    for (unsigned int i = 0; i < phoneBook.size(); i++)
    {
        PhoneBookHardCopy << "Name: " << phoneBook[i].getContactName() << endl
                          << "Phone Number: " << phoneBook[i].getContactNumber() << endl
                          << "Note: " << phoneBook[i].getNote() << endl;
    }
    PhoneBookHardCopy.close();
}

ostream &operator<<(ostream &output, const PhoneBook &info)
{
    output << "PHONEBOOK DIRECTORY" << endl
           << "-------------------" << endl;
    for (unsigned int i = 0; i < info.phoneBook.size(); i++)
    {
        output << "Name: " << info.phoneBook[i].getContactName() << endl
               << "Phone Number: " << info.phoneBook[i].getContactNumber() << endl
               << "Note: " << info.phoneBook[i].getNote() << endl;
    }
    return output;
}
