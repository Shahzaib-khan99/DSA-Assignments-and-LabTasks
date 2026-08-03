#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("position.bin", ios::binary);
    int a = 10, b = 20, c = 30, d=100;

    fout.write((char*)&a, sizeof(a));
    cout << "Write pointer after writing 1st int: " << fout.tellp() << endl;

    fout.write((char*)&b, sizeof(b));
    cout << "Write pointer after writing 2nd int: " << fout.tellp() << endl;

    fout.write((char*)&c, sizeof(c));
    cout << "Write pointer after writing 3rd int: " << fout.tellp() << endl;
    
    fout.write((char*)&d , sizeof(d));
    cout<<"write pointer after writing 4th iny: " << fout.tellp() << endl;

    fout.close();
}
