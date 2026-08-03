#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name;
    float marks;
};

void readFromFile(Student s[], int &count) {
    ifstream file("students.txt");
    if (file) {
        string line;
        getline(file, line);
        while (file >> s[count].id >> s[count].name >> s[count].marks) {
            count++;
        }
        file.close();
    }
}

void addStudents(Student s[], int &count) {
    int n;
    cout << "Enter number of new students= ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter ID= ";
        cin >> s[count].id;
        cin.ignore();
        cout << "Enter Name= ";
        getline(cin, s[count].name);
        cout << "Enter Marks= ";
        cin >> s[count].marks;
        count++;
    }
}

void writeToFile(Student s[], int count) {
    ofstream file("students.txt");
    file << "ID\tName\tMarks\n";
    for (int i = 0; i < count; i++) 
	{
    	
        file << s[i].id << "\t" << s[i].name << "\t" << s[i].marks << "\n";
    }
    file.close();
    
}

void displayStudents(Student s[], int count) 
{
    cout << "\nAll Students:\n";
    cout << "ID\tName\tMarks\n";
    for (int i = 0; i < count; i++) {
        cout << s[i].id << "\t" << s[i].name << "\t" << s[i].marks << endl;
        
    }
}

int main() {
    Student students[50];
    int n= 0;

   readFromFile(students, n);
    addStudents(students, n);
    writeToFile(students, n);
   displayStudents(students, n);

    return 0;
}
