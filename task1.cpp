#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

int main() {
    Student s;
    cout << "Enter student ID: ";
    cin >> s.id;
    cin.ignore();
    cout << "Enter student name: ";
    getline(cin, s.name);
    cout << "Enter student marks: ";
    cin >> s.marks;
    cout << "\nStudent Details\n";
    cout << "ID: " << s.id << endl;
    cout << "Name: " << s.name << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}
