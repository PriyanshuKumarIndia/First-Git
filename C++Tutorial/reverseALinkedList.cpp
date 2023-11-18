#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(){
        data=0;
        next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    Node*head;
    public:
    LinkedList() {
         head = NULL;
    } 
    void insertNode(int data){
        Node *newNode= new Node(data);
        if(head==NULL){
            head=newNode;
            return;
        }
        else{
            Node* temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newNode;
        }    
    }

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }cout<<endl;
    }

    void reverseLL(){
        Node* cur=head,*prev=NULL,*nex;
        while(cur!=NULL){
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        head=prev;
    }
};

int main(){
    LinkedList List1;
    List1.insertNode(45);
    List1.insertNode(34);
    List1.insertNode(89);
    List1.insertNode(12);
    cout<<"List before Reversing :"<<endl;
    List1.display();
    List1.reverseLL();
    cout<<"List After Reversing :"<<endl;
    List1.display();

}