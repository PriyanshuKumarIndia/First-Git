#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
int main(){
    node*head;
    node*first=new node;
    node*second=new node;
    node*third=new node;
    node*fourth=new node;
    head=first;
    first->data=90;
    second->data=78;
    third->data=34;
    fourth->data=76;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;
    node*ptr=head;
    cout<<ptr->next->next->data;
}