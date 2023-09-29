// Header file for AddressBook class

#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H


#include "Entry.h"

const int MAX_ENTRIES = 10;

class AddressBook {

    public:
        AddressBook();
        AddressBook(Entry entry);
        AddressBook(string name, string address, string phone, string email);

        void addEntry(Entry entry);
        void addEntryByDetail(string name, string address, string phone, string email);
        void searchAndPrintByName(string nameFirst, string nameLast);


        void printBook();

    private:
        Entry entries[MAX_ENTRIES];
        int numContacts;
};


#endif // ADDRESSBOOK_H