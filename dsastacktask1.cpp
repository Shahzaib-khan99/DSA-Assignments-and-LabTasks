// dsalabtask1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class stack {
private:
    int top =-1;
public :
    int* arr;
    int val;
    // constructor for initializing the object
    stack(int size) {
        arr = new int[size];
        
    }
    void push(int val)
    {
        if (top == -1)
        {
            cout << " stack is underflow" << endl;
        }
        top++;
        arr[top] = val;
        

    }
    
    void pop()
    {
        if (top == -1)
        {
            cout << " stack is underflow" << endl;
        }
        arr[top] = val;
        top--;
	}
    bool isfull()
    {
        if (top == -1)
        {
            cout << " stack is underflow" << endl;
        }
        return arr[top];
	}
    bool isempty() {
        return top == -1;

    }
    
};


int main()
{
    stack s(100);
    s.push(10);
    s.push(22);
    s.push(77);
    s.push(55);
    cout << "the value in the stavk is : " << endl;
    for (int i = 0; i < 100; i++)
    {
		cout << s.arr[i] << endl;
    }


    s.pop();
	s.pop();  
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
