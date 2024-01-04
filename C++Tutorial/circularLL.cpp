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

class CircularLL{
	Node* head;
	public:
	CircularLL(){
		head=NULL;
	}

	void insertNode(int data);

	void display();

	void deleteNode(int pos=INT_MAX);

	int sizeOfCLL();
};

int main(){
	CircularLL cll1;
	cll1.insertNode(8);
	cll1.insertNode(2);
	cll1.insertNode(4);
	cll1.insertNode(5);
	cll1.insertNode(7);
	cll1.insertNode(1);
	cout<<"Linked list before deletion"<<endl;
	cll1.display();
	cll1.deleteNode(1);
	cout<<"Linked list after deletion"<<endl;
	cll1.display();
	cout<<cll1.sizeOfCLL()<<endl;
	
}

void CircularLL:: insertNode(int data){
	Node* newNode= new Node(data);
	if(head==NULL){
		head=newNode;
		head->next=head;
		return;
	}
	Node*temp=head->next;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=newNode;
	newNode->next=head;
}

void CircularLL :: display(){
	if(head==NULL){
		cout<<"List is empty."<<endl;
		return;
	}
	Node* temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	}while(temp!=head);
	cout<<endl;
}

void CircularLL :: deleteNode(int pos){
	if(head==NULL){
		cout<<"List is empty"<<endl;
		return;
	}
	if(sizeOfCLL()<pos && pos!=INT_MAX){
		cout<<"Out of bound."<<endl;
		return;
	}
	if(pos==1){
		if(head->next==head){
			delete head;
			cout<<"Linked list deleted."<<endl;
			return;
		}
		Node*ptr1=head->next,*ptr2=head;
		while(ptr1->next!=head){
			ptr1=ptr1->next;
		}
		ptr1->next=head->next;
		head=head->next;
		delete ptr2;
	}
	else if(pos==INT_MAX){
		Node*ptr1=head,*ptr2=head->next;
		while(ptr2->next!=head){
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		ptr1->next=ptr2->next;
		delete ptr2;
	}
	else{
		Node*ptr2=head->next,*ptr1=head;
		for(int i=2;i<pos;i++){
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		ptr1->next=ptr2->next;
		delete ptr2;
	}
}

int CircularLL :: sizeOfCLL(){
	int count=0;
	if(head==NULL){
		return 0;
	}
	Node* temp=head;
	do{
		count++;
		temp=temp->next;
	}while(temp!=head);
	return count;
}