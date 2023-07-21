#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node*prev;
};
int main(){
    node*head=new node,*first=new node;
    head->data=90;
    head->next=NULL;
    head->prev=NULL;
    first->data=78;
    first->next=NULL;
    first->prev=head;
    head->next=first;
    node*second=new node;
    second->data=67;
    second->next=NULL;
    second->prev=first;
    first->next=second;
    node*ptr=head;
    do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=NULL);
    node*p=second;
    do{
        cout<<p->data<<" ";
        p=p->prev;
    }while(p!=NULL);
}