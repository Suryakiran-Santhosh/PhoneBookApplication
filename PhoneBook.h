// Suryakiran Santhosh
// CSIS 137 Tuesday Night class
// FINAL PROJECT PHONEBOOK APP

#ifndef PhoneBook_h
#define PhoneBook_h

#include <iostream>
using namespace std;
#include <vector>
#include <fstream>
#include "Contact.h"

class PhoneBook
{
    friend ostream &operator<<(ostream &, const PhoneBook &);

private:
    vector<Contact> phoneBook;

public:
    // constructor
    PhoneBook(Contact = Contact());

    void addToPhoneBook(Contact);
    bool removeFromPhoneBook(Contact);
    void printPhoneBook(); // hard copy

    // destructor
    ~PhoneBook();
};

#endif
