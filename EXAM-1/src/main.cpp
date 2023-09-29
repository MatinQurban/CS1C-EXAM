// Main file

#include "AddressBook.h"

int main() {

    AddressBook book;

    for(int i = 0; i < MAX_ENTRIES+1; i++) {

        Entry entry("Matin " + to_string(i), "Qurbanzadeh", "949-870-0772", "mqbanz@gmail.com");
        cout << "Adding: " << entry.getFirstName() << " " << entry.getLastName() << endl;
        book.addEntry(entry);

    }

    cout << "***** Printing book *****" << endl;
    book.printBook();
    cout << endl;

    cout << "***** Searching for Matin 5 *****" << endl;
    book.searchAndPrintByName("Matin 5", "Qurbanzadeh");
    cout << endl;

    cout << "***** Searching for Matin 10 *****" << endl;
    book.searchAndPrintByName("Matin 10", "Qurbanzadeh");

    return 0;
}