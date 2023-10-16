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
    first->data=90;
    first->next=NULL;
    head->next=first;
    node * second=new node;
    second->data=40;
    second->next=NULL;
    first->next=second;
    node * third=new node;
    third->data=78;
    third->next=NULL;
    second->next=third;
    display(head);
    node*ptr1=head;
    node*ptr2=head->next;
    while(ptr2->next!=NULL){
        if(ptr1->data==ptr2->data){
            ptr1->next=ptr2->next;
            free(ptr2);
            break;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    display(head);
}