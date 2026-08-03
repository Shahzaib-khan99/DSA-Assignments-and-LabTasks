#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Learner {
    int rollNo;
    string fullName;
    float score;
};

int main() {
    ifstream inputFile("students.txt");
    if (!inputFile) {
        cout << "Error: students.txt could not be opened." << endl;
        return 0;
    }

    string heading;
    getline(inputFile, heading);
    cout << heading << endl;

    Learner l;
    while (inputFile >> l.rollNo >> l.fullName >> l.score) {
        cout << l.rollNo << "\t" << l.fullName << "\t" << l.score << endl;
    }

    inputFile.close();
    return 0;
}
