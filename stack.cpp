#include <iostream>
#include <string>

using namespace std;

class Stack {
private:
    int topIndex;
    char arr[100];

public:
    Stack() {
        topIndex = -1;
    }

    void push(char val) {
        if (topIndex == 99) {
            cout << "Stack Overflow" << endl;
        }
        else {
            arr[++topIndex] = val;
        }
    }

    char pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow" << endl;
            return '\0';
        }
        else {
            return arr[topIndex--];
        }
    }

    char top() {
        if (topIndex == -1)
            return '\0';
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    bool isFull() {
        return topIndex == 99;
    }

    int precedence(char op) {
        if (op == '^')
            return 3;
        else if (op == '*' || op == '/')
            return 2;
        else if (op == '+' || op == '-')
            return 1;
        else
            return -1;
    }

    bool isOperator(char c) {
        return (c == '^' || c == '*' || c == '/' || c == '+' || c == '-');
    }

    void infixToPostfix(string s) {
        Stack st;
        string result = "";

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            // Operand
            if ((c >= 'a' && c <= 'z') ||
                (c >= 'A' && c <= 'Z') ||
                (c >= '0' && c <= '9')) {

                result += c;
            }

            // Left parenthesis
            else if (c == '(') {
                st.push(c);
            }

            // Right parenthesis
            else if (c == ')') {
                while (!st.isEmpty() && st.top() != '(') {
                    result += st.top();
                    st.pop();
                }

                if (!st.isEmpty())
                    st.pop(); // Remove '('
            }

            // Operator
            else if (isOperator(c)) {
                while (!st.isEmpty() &&
                       precedence(st.top()) >= precedence(c)) {
                    result += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        // Pop remaining operators
        while (!st.isEmpty()) {
            result += st.top();
            st.pop();
        }

        cout << "Postfix Expression: " << result << endl;
    }
};

int main() {
    string infix;

    cout << "Enter an infix expression: ";
    cin >> infix;

    Stack st;
    st.infixToPostfix(infix);

    return 0;
}