#include <iostream>
#include "Book_Management.cpp"
#include "Member_Management.cpp"
#include "Issue_Return_Management.cpp"

using namespace std;

int main()
{
    BookManagement book;
    MemberManagement member;
    IssueReturn issue;

    int choice;

    do
    {
        cout << "\n====================================\n";
        cout << "       LIBRARY MANAGEMENT SYSTEM\n";
        cout << "====================================\n";

        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book\n";
        cout << "4. Delete Book\n";
        cout << "5. Add Member\n";
        cout << "6. Display Members\n";
        cout << "7. Search Member\n";
        cout << "8. Issue Book\n";
        cout << "9. Return Book\n";
        cout << "10. Check Book Availability\n";
        cout << "11. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                book.addBook();
                break;

            case 2:
                book.displayBooks();
                break;

            case 3:
                book.searchBook();
                break;

            case 4:
                book.deleteBook();
                break;

            case 5:
                member.addStudent();
                break;

            case 6:
                member.displayStudents();
                break;

            case 7:
                member.searchStudent();
                break;

            case 8:
                issue.issueBook();
                break;

            case 9:
                issue.returnBook();
                break;

            case 10:
                issue.checkAvailability();
                break;

            case 11:
                cout << "\nThank you for using Library Management System!\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while (choice != 11);

    return 0;
}