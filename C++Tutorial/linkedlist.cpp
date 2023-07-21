#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
void display(node * ptr){
    cout<<"Entering loop with value "<<ptr->next<<endl;
    while(ptr!=NULL){
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
int main(){
    node * head=new node;
    head->data=90;
    head->next=NULL;
    node *first=new node;
    first->data=85;
    first->next=NULL;
    head->next=first;
    node * second=new node;
    second->data=30;
    second->next=NULL;
    first->next=second;
    node * third=new node;
    third->data=78;
    third->next=NULL;
    second->next=third;
    node * index=new node;
    index->data=456;
    index->next=head;
    display(head);
    cout<<head->data;
}