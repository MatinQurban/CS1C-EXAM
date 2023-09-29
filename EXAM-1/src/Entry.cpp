// Implementation of the Entry class.

#include "Entry.h"

Entry::Entry() {
    fName = "";
    lName = "";
    phoneNum = "";
    email = "";
}

Entry::Entry(string fName, string lName, string phone, string email) {
    this->fName = fName;
    this->lName = lName;
    this->phoneNum = phone;
    this->email = email;
}

void Entry::setName(string firstName, string lastName) {
    fName = firstName;
    lName = lastName;
}

void Entry::setPhone(string phone) {
    this->phoneNum = phone;
}

void Entry::setEmail(string email) {
    this->email = email;
}

string Entry::getFirstName() {
    return fName;
}

string Entry::getLastName() {
    return lName;
}

string Entry::getPhone() {
    return phoneNum;
}

string Entry::getEmail() {
    return email;
}

void Entry::print() {

    cout << "* " << fName << " " << lName << endl;
    cout << "    Phone: " << phoneNum << endl;
    cout << "    Email: " << email << endl;

}