// Header file for Entry class

#ifndef ENTRY_H
#define ENTRY_H

#include <string>
#include <iostream>

using namespace std;

class Entry {

    public:
        Entry();
        Entry(string fName, string lName, string phone, string email);

        void setName(string firstName, string lastName);
        void setPhone(string phone);
        void setEmail(string email);

        string getFirstName();
        string getLastName();
        string getPhone();
        string getEmail();

        void print();


    private:
        string fName;
        string lName;
        string phoneNum;
        string email;

};

#endif // ENTRY_H