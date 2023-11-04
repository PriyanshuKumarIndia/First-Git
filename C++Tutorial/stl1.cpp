#include <bits/stdc++.h>
using namespace std;

template <class T1,class T2>
class Stackop {
    int top = -1;
    int size = 5;
    int arr[10];

public:
    T2 isempty() {
        if (top == -1) cout << "Stack is Empty\n";
        else cout << "Stack is not Empty\n";
    }

    T2 isfull() {
        if (top == size - 1) cout << "Stack is full\n";
        else cout << "Stack is not full";
    }

    T1 push(T1 element) {
        if (top == size - 1) cout << "can't push element " << element << " Overflow\n";
        else {
            top++;
            arr[top] = element;
        }
        return 0;
    }

    T1 pop() {
        if (top == -1) cout << "Stack is Empty\n";
        else {
            cout << "Element is Poped successfully" << arr[top] << endl;
            arr[top] = 0;
            top--;
        }
        return 0;
    }

    T1 peek(){
        return arr[top];
    }

    void display() {
        if (top == -1) cout << "stack is Empty... Underflow\n";
        else {
            cout << "Your Array is\n";
            for (int i = top; i >= 0; i--) cout << arr[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Stackop<int,bool> obj;
    obj.isempty();
    obj.display();
    obj.push(25);
    obj.push(21);
    obj.display();
    obj.push(51);
    obj.push(101);
    obj.push(151);
    obj.display();
    obj.push(201);
    obj.display();
    obj.pop();
    obj.push(251);
    obj.display();
    return 0;
}
