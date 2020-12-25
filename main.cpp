// Suryakiran Santhosh
// CSIS 137 Tuesday Night class
// FINAL PROJECT PHONEBOOK APP

#include <iostream>
using namespace std;
#include <string>

#include "PhoneBook.h"
#include "Contact.h"
#include "PhoneNumber.h"

int main()
{
    char menuSelection;
    string userName;

    cout << "-----------------" << endl
         << "| PHONEBOOK APP |" << endl
         << "-----------------" << endl
         << "Please enter your name: " << endl;
    getline(cin, userName);

    PhoneBook book;

    do
    {
        cout << endl
             << userName << " PHONEBOOK" << endl
             << "---------------------------" << endl
             << "A) Add New Contact " << endl
             << "B) Remove Contact " << endl
             << "C) Print Phone Book" << endl
             << "D) Print Phone Book(Hard Copy)" << endl
             << "Q) Quit" << endl;
        cin >> menuSelection;

        if (menuSelection == 'A' or menuSelection == 'a')
        {
            string name;
            PhoneNumber num;
            string note;

            cin.ignore();

            cout << "Please enter the Contact Name: " << endl;
            getline(cin, name);

            cout << "Please enter the Contact Number (form: XXXXXXXXXXX): " << endl;
            cin >> num;

            cin.ignore();

            cout << "Please enter the Contact Note: " << endl;
            getline(cin, note);

            Contact addContact(name, num, note);
            book.addToPhoneBook(addContact);
        }
        else if (menuSelection == 'B' or menuSelection == 'b')
        {
            cin.ignore();

            string name;
            Contact removeContact;
            cout << "Please enter the full name of the contact you would like to remove: " << endl;
            getline(cin, name);
            removeContact.setContactName(name);
            while (!book.removeFromPhoneBook(removeContact))
            {
                cout << "The name you entered is not in the phonebook. Please make sure to enter name exactly like it is in the phonebook." << endl;
                cout << "Please enter the full name of the contact you would like to remove: " << endl;
                getline(cin, name);
                removeContact.setContactName(name);
            }
        }
        else if (menuSelection == 'C' or menuSelection == 'c')
        {
            cout << book << endl;
        }
        else if (menuSelection == 'D' or menuSelection == 'd')
        {
            book.printPhoneBook();
        }
        else if (menuSelection == 'Q' or menuSelection == 'q')
        {
            cout << "You have chosen to quit the program. Thank you for using the program." << endl
                 << endl;
        }
        else
        {
            cout << "Invalid Entry" << endl
                 << endl;
        }
    } while (menuSelection != 'Q' and menuSelection != 'q');
    //system("PAUSE");
    return 0;
}
