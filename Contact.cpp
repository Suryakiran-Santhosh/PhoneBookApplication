// Suryakiran Santhosh
// CSIS 137 Tuesday Night class
// FINAL PROJECT PHONEBOOK APP

#include "Contact.h"

Contact::Contact(string inputName, PhoneNumber inputPhoneNumber, string inputNote) // constructor
{
    setContactName(inputName);
    contactNumber.setPhoneNumber(inputPhoneNumber.getPhoneNumber());
    setNote(inputNote);
}

// mutator functions
void Contact::setContactName(string inputName)
{
    contactName = inputName;
}
void Contact::setNote(string inputNote)
{
    note = inputNote;
}

// accessor functions
string Contact::getContactName() const
{
    return contactName;
}
PhoneNumber Contact::getContactNumber() const
{
    return contactNumber;
}
string Contact::getNote() const
{
    return note;
}

ostream &operator<<(ostream &output, const Contact &info)
{
    output << "Name: " << info.getContactName() << endl
           << "Phone Number: " << info.getContactNumber() << endl
           << "Note: " << info.getNote() << endl;
    return output;
}
istream &operator>>(istream &input, Contact &info)
{
    input >> info.contactName;
    input.ignore();
    input >> info.contactNumber;
    input.ignore();
    input >> info.note;
    return input;
}
