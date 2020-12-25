// Suryakiran Santhosh
// CSIS 137 Tuesday Night class
// FINAL PROJECT PHONEBOOK APP

#ifndef Contact_h
#define Contact_h

#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

#include "PhoneNumber.h"

class Contact
{
    friend ostream &operator<<(ostream &, const Contact &);
    friend istream &operator>>(istream &, Contact &);

private:
    string contactName;
    PhoneNumber contactNumber;
    string note;

public:
    Contact(string = "No Contact Name", PhoneNumber = PhoneNumber(), string = "No Note"); // constructor

    // mutator functions
    void setContactName(string);
    void setNote(string);

    // accessor functions
    PhoneNumber getContactNumber() const;
    string getContactName() const;
    string getNote() const;
};

#endif /* Contact_h */
