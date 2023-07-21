#include<bits/stdc++.h>
using namespace std;
int pop(int array[],int top){
    if(top<0){
        cout<<"Stack is empty."<<endl;
        return top;
    }
    else{
        cout<<"Item poped."<<endl;
        return --top;
    }
}
int push(int array[],int top,int max){
    if(top>=max || top<-1){
        cout<<"Stack is already full."<<endl;
        return top;
    }
    else{
        int temp;
        cout<<"Enter the value to push into the stack : ";
        cin>>temp;
        array[top+1]=temp;
        cout<<"Element pushed into stack."<<endl;
        return ++top;
    }
}
void peek(int array[],int top){
    if(top>=0){
        cout<<"Peek element is "<<array[top]<<endl;
    }
    else{
        cout<<"NO ELEMEMT TO SHOW.";
    }
}
void display(int array[],int top){
    for(int i=0;i<=top;i++){
        cout<<array[i]<<" ";
    }
}
int main(){
    int array[10],size,max=9;
    cout<<"Enter the size of the stack : ";
    cin>>size;
    int top=-1;
    printf("Enter %d elements :\n",size);
    for(int i=0;i<size;i++){
        cin>>array[i];
        top++;
    }
    char temp;
    do{
    int choice;
    cout<<"Enter 1. To push element in the stack."<<endl
        <<"Enter 2. To pop element from the stack."<<endl
        <<"Enter 3. To show the peek element of the stack."<<endl
        <<"Enter 4. To display the stack."<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch (choice){
        case 1:{
            top=push(array,top,max);
            break;
        }
        case 2:{
            top=pop(array,top);
            break;
        }
        case 3:{
            peek(array,top);
            break;
        }
        case 4:{
            display(array,top);
            break;
        }
        default :{
            cout<<"Invalid input......Try again."<<endl;
        }
    }
    cout<<"\nWant to do any other operations?\nEnter 'y' for YES.\nEnter any other character for NO."<<endl;
    cin>>temp;
    }while(temp=='y'||temp=='Y');
    cout<<"Thank you:)";
}