#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class LinkedList{
    public:
    Node*head;
    LinkedList() {
         head = NULL;
    } 
    void insertNode(int data);

    void display();

    void reverseLL();

    void deleteNode();

    void deleteNode(int pos);

    int sizeOfLL();

    void detectLoop();

    void detectRandomLoop();
};

Node* kWayReverse(Node*head,int k);

bool Find(vector<Node*>,Node*);



int main(){
    LinkedList List1;
    List1.insertNode(45);
    List1.insertNode(34);
    List1.insertNode(89);
    List1.insertNode(12);
    List1.insertNode(90);
    List1.insertNode(66);
    List1.insertNode(65);
    // List1.display();
    List1.detectRandomLoop();
    List1.display();
}

void LinkedList::insertNode(int data){
    Node *newNode= new Node(data);
    if(head==NULL){
        head=newNode;
        return;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL && temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
    }
    newNode->next=head;    
}

void LinkedList:: display(){
     Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

void LinkedList::reverseLL(){
    Node* cur=head,*prev=NULL,*nex;
    while(cur!=NULL){
        nex=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nex;
    }
    head=prev;
}

void LinkedList::deleteNode(){
    Node* temp1=head,*temp2=head->next;
    while(temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp1->next=NULL;
    // free(temp2);
    delete temp2;
}

void LinkedList:: deleteNode(int pos){
    if(sizeOfLL()<pos){
        cout<<"Out of bound."<<endl;
        return;
    }
    Node* ptr1=head,*ptr2=head->next;
    if(pos==1){
        head=ptr2;
        delete ptr1;
    }
    if(pos==2){
        ptr1->next=ptr2->next;
        delete ptr2;
    }
    for(int i=3;i<=pos;i++){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    ptr1->next=ptr2->next;
    delete ptr2;
}

int LinkedList:: sizeOfLL(){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }return count;
}

Node* kWayReverse(Node*head,int k){
    if(head==NULL){
        return NULL;
    }
    Node*curr=head,*prev=NULL,*nextt=NULL;
    int count=0;
    while(count<k){
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
        count++;
    }
    head->next=kWayReverse(curr,k);
    return prev;
}

void LinkedList :: detectLoop(){
    Node* temp=head;
    while(temp->next!=NULL && temp->next!=head){
        temp=temp->next;
    }
    if(temp->next==head){
        cout<<"Loop is present."<<endl;
        temp->next=NULL;
    }
}

bool Find(vector<Node*> arr,Node* key){
	vector<Node*> :: iterator it;
	it=find(arr.begin(),arr.end(),key);
	if(it==arr.end()){
		return false;
	}
	else{
		return true;
	}
}

void LinkedList :: detectRandomLoop(){
    vector<Node*> arr;
	Node* ptr=head;
	arr.push_back(ptr);
	while(ptr->next!=NULL && !Find(arr,ptr->next)){
		ptr=ptr->next;
	}
	ptr->next=NULL;
}