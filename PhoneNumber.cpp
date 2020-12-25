// Suryakiran Santhosh
// CSIS 137 Tuesday Night class
// FINAL PROJECT PHONEBOOK APP

#include "PhoneNumber.h"

// constructor
PhoneNumber::PhoneNumber(string inputPhoneNumber)
{
    if (!validPhoneNumber(inputPhoneNumber))
    {
        setPhoneNumber("INVALID PHONE NUMBER");
    }
    else
    {
        setPhoneNumber(inputPhoneNumber);
    }
}

// mutator functions
void PhoneNumber::setPhoneNumber(string inputPhoneNumber)
{
    phoneNumber = inputPhoneNumber;
}

// accessor functions
string PhoneNumber::getPhoneNumber() const
{
    return phoneNumber;
}

// member functions
bool PhoneNumber::validPhoneNumber(string inputPhoneNumber)
{
    if (inputPhoneNumber.length() == 11 or inputPhoneNumber.length() == 14)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream &operator<<(ostream &output, const PhoneNumber &num)
{
    if (num.getPhoneNumber().length() == 11)
    {
        output << num.getPhoneNumber()[0] << "(";
        for (int x = 1; x <= 3; x++)
        {
            output << num.getPhoneNumber()[x];
        }
        output << ")";
        for (int x = 4; x <= 6; x++)
        {
            output << num.getPhoneNumber()[x];
        }
        output << "-";
        for (int x = 7; x <= 10; x++)
        {
            output << num.getPhoneNumber()[x];
        }
    }
    else if (num.getPhoneNumber().length() == 14)
    {
        output << num.getPhoneNumber();
    }
    return output;
}

istream &operator>>(istream &input, PhoneNumber &num)
{
    input >> num.phoneNumber;
    return input;
}
