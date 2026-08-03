#include <iostream>
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

void displayStudents(Student s[], int n) {
    cout << "\nID\tName\t\tMarks\n";
    for(int i=0; i<n; i++) {
        cout << s[i].id << "\t" << s[i].name << "\t\t" << s[i].marks << endl;
    }
}

Student highestStudent(Student s[], int n) {
    int highest = 0;
    for(int i=1; i<n; i++) {
        if(s[i].marks > s[highest].marks)
            highest = i;
    }
    return s[highest];
}

int main() {
    const int size = 5;
    Student students[size];
    inputStudents(students, size);
    displayStudents(students, size);
    Student highest = highestStudent(students, size);
    
    
    cout << "\nStudent with highest marks:\n";
    cout << "ID: " << highest.id << endl;
    cout << "Name: " << highest.name << endl;
    cout << "Marks: " << highest.marks << endl;
    return 0;
}
