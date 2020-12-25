// Suryakiran Santhosh
// CSIS 137 Tuesday Night class
// FINAL PROJECT PHONEBOOK APP

#ifndef PhoneNumber_h
#define PhoneNumber_h

#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

class PhoneNumber
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

private:
    string phoneNumber;

public:
    // constructor
    PhoneNumber(string = "INVALID PHONE NUMBER");

    // mutator functions
    void setPhoneNumber(string);

    // accessor functions
    string getPhoneNumber() const;

    // member functions
    bool validPhoneNumber(string); //checks to see if the phone number has correct number of digits
};

#endif /* PhoneNumber_h */
