#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void display(node*head,node *fifth){
    node*ptr=head;
     do{
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }while(ptr!=fifth->next);
}
int main(){
    node * head;
    head=NULL;
    node*first=new node;
    first->data=23;
    first->next=NULL;
    head=first;
    node*second=new node;
    second->data=89;
    second->next=NULL;
    first->next=second;
    node*third=new node;
    third->data=87;
    third->next=NULL;
    second->next=third;
    node*fourth=new node;
    fourth->data=47;
    fourth->next=NULL;
    third->next=fourth;
    node*fifth=new node;
    fifth->data=67;
    fifth->next=first;
    fourth->next=fifth;
    display(head,fifth);
     int pos=4;
    node*ptr1=head,*ptr2=first,*insertm=new node;
    insertm->data=789;
    for(int i=2;i<pos;i++){
            ptr1=ptr1->next;
           // ptr2=ptr2->next;
    }
    insertm->next=ptr1->next;
    ptr1->next=insertm;
     cout<<"\nDisplaying after inserting in middle\n";
    display(head,fifth);
    // node*insertf=new node;
    // insertf->data=123;
    // insertf->next=first;
    // fifth->next=insertf;
    // head=insertf;
    // cout<<"\nDisplaying after inserting\n";
    // display(head,fifth);
    
    
  
}