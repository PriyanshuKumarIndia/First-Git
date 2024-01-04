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

bool Find(vector<int> arr,int key);

void display(Node* head);

void removeDuplicatesSorted(Node* head);

void removeDuplicatesUnsorted(Node* head);

int main(){
	
	Node* head=NULL;
	Node*first=new Node;
	Node*second=new Node;
	Node*third=new Node;
	Node*fourth=new Node;
	Node*fifth=new Node;
	head=first;
	first->data=6;
	second->data=7;
	third->data=8;
	fourth->data=9;
	fifth->data=6;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=NULL;
	cout<<"Before removing :"<<endl;
	display(head);
	removeDuplicatesUnsorted(head);
	cout<<"After removing :"<<endl;
	display(head);
}

bool Find(vector<int> arr,int key){
	vector<int> :: iterator it;
	it=find(arr.begin(),arr.end(),key);
	if(it==arr.end()){
		return false;
	}
	else{
		return true;
	}
}

void display(Node* head){
	Node* ptr =head;
	do{
		cout<<ptr->data<<" "<<ptr<<endl;
		ptr=ptr->next;
	}while(ptr!=NULL && ptr!=head);
	cout<<endl;
}

void removeDuplicatesSorted(Node* head){
	Node* ptr=head;
	while(ptr->next!=NULL){
		if(ptr->data == ptr->next->data){
			Node* temp=ptr->next;
			ptr->next=temp->next;
			delete temp;
			continue;
		}
		ptr=ptr->next;
	}
}

void removeDuplicatesUnsorted(Node* head){
	Node* ptr=head,*temp=NULL;
	vector<int> arr;
	while(ptr!=NULL){
		if(!Find(arr,ptr->data)){
			arr.push_back(ptr->data);
			temp=ptr;
			ptr=ptr->next;
			continue;
		}
		else{
			temp->next=ptr->next;
			Node* T=ptr;
			ptr=ptr->next;
			delete T;
		}
	}
}