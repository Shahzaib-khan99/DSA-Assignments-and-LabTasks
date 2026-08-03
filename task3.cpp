#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

void inputStudents(Student s[], int n) {
    for(int i=0; i<n; i++) {
        cout << "Enter ID for student " << i+1 << ": ";
        cin >> s[i].id;
        cin.ignore();
        cout << "Enter name for student " << i+1 << ": ";
        getline(cin, s[i].name);
        cout << "Enter marks for student " << i+1 << ": ";
        cin >> s[i].marks;
    }
}

int main() {
    const int size = 5;
    Student students[size];
    inputStudents(students, size);

    ofstream file("students.txt");
    file << "ID\tName\tMarks\n";
    for(int i=0; i<size; i++) {
        file << students[i].id << "\t" << students[i].name << "\t" << students[i].marks << "\n";
    }
    file.close();

    cout << "\nData successfully saved to students.txt\n";
    return 0;
}
