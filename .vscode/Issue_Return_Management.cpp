#include <iostream>
#include <vector>
#include <string>
using namespace std;

class IssueReturn {
public:
    struct Record {
        int bookID;
        string studentName;
        bool issued;
    };

    vector<Record> records;

    void issueBook() {
        Record r;

        cout << "\nEnter Book ID: ";
        cin >> r.bookID;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, r.studentName);

        r.issued = true;
        records.push_back(r);

        cout << "\nBook issued successfully!\n";
    }

    void returnBook() {
        int id;

        cout << "\nEnter Book ID to return: ";
        cin >> id;

        for (int i = 0; i < records.size(); i++) {
            if (records[i].bookID == id && records[i].issued) {
                records[i].issued = false;
                cout << "\nBook returned successfully!\n";
                return;
            }
        }

        cout << "\nIssued book record not found!\n";
    }

    void checkAvailability() {
        int id;

        cout << "\nEnter Book ID: ";
        cin >> id;

        for (int i = 0; i < records.size(); i++) {
            if (records[i].bookID == id && records[i].issued) {
                cout << "\nBook is currently issued.\n";
                return;
            }
        }

        cout << "\nBook is available.\n";
    }
};