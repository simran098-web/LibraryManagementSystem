#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    int studentID;
    string name;
    string course;
    string phone;
};

class MemberManagement {
public:
    vector<Student> students;

    void addStudent() {
        Student s;

        cout << "\nEnter Student ID: ";
        cin >> s.studentID;
        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, s.name);

        cout << "Enter Course: ";
        getline(cin, s.course);

        cout << "Enter Phone Number: ";
        getline(cin, s.phone);

        students.push_back(s);
        cout << "\nStudent added successfully!\n";
    }

    void displayStudents() {
        if (students.empty()) {
            cout << "\nNo student records found!\n";
            return;
        }

        for (int i = 0; i < students.size(); i++) {
            cout << "\nStudent ID: " << students[i].studentID;
            cout << "\nName: " << students[i].name;
            cout << "\nCourse: " << students[i].course;
            cout << "\nPhone: " << students[i].phone << "\n";
        }
    }

    void searchStudent() {
        int id;

        cout << "\nEnter Student ID: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++) {
            if (students[i].studentID == id) {
                cout << "\nStudent Found!\n";
                cout << "Name: " << students[i].name << "\n";
                cout << "Course: " << students[i].course << "\n";
                cout << "Phone: " << students[i].phone << "\n";
                return;
            }
        }

        cout << "\nStudent not found!\n";
    }
};