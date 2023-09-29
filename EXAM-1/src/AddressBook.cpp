// Implementation of AddressBook class

#include "AddressBook.h"

AddressBook::AddressBook() {

    numContacts = 0;

}

AddressBook::AddressBook(Entry entry) {

    entries[0] = entry;
    numContacts = 1;
}

AddressBook::AddressBook(string name, string address, string phone, string email) {

    entries[0] = Entry(name, address, phone, email);

    numContacts = 1;

}

void AddressBook::addEntry(Entry entry) {

    if(numContacts < MAX_ENTRIES) {
        entries[numContacts] = entry;
        numContacts++;
    } else {
        cout << "Address book is full. Cannot add another entry." << endl;
    }

}

void AddressBook::addEntryByDetail(string name, string address, string phone, string email) {

    if(numContacts < MAX_ENTRIES) {
        entries[numContacts] = Entry(name, address, phone, email);
        numContacts++;
    } else {
        cout << "Address book is full. Cannot add another entry." << endl;
    }

}

void AddressBook::searchAndPrintByName(string nameFirst, string nameLast) {
    bool found = false;
    int index = 0;

    for(int i = 0; i < MAX_ENTRIES; i++) {
        if(entries[i].getFirstName() == nameFirst && entries[i].getLastName() == nameLast) {
            found = true;
            index = i;
        }
    }

    if(found) {
        entries[index].print();
    } else {
        cout << "No entry found for " << nameFirst << " " << nameLast << endl;
    }

}

void AddressBook::printBook() {

    cout << "Address Book:\n" << endl;
    for(int i = 0; i < numContacts; i++) {
        entries[i].print();
    }

}