#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack{
    T *arr;
    int size,top;

    public:
        Stack(int size){
            this->size=size;
            arr=new T[size];
            top=-1;
        }

        bool isEmpty(){
            if(top<0) return true;
            else return false;
        }

        bool isFull(){
            if(top==size-1) return true;
            else return false;
        }

        void push(T val){
            if(top<size-1){
                top++;
                arr[top]=val;
            }
            else{
                cout<<"Stack overflow!"<<endl;
                return;
            }
        }

        void pop(){
            if(top>=0){
                cout<<arr[top]<<endl;
                top--;
            }
            else{
                cout<<"Stack underflow!"<<endl;
                return;
            }
        }

        T peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"Stack is empty!"<<endl;
            }
        }
};

int main(){
    string str="Priyanshu";
    Stack<char> st(str.length());
    for(int i=0;i<str.length();i++){
        st.push(str[i]);
    }
    while(!st.isEmpty()){
        st.pop();
    }

}