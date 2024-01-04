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

pair<Node*,Node*> divideCLL(Node* head);


int main(){
	
	Node* head=NULL;
	Node*first=new Node;
	Node*second=new Node;
	Node*third=new Node;
	Node*fourth=new Node;
	Node*fifth=new Node;
	Node* sixth=new Node;
	head=first;
	first->data=6;
	second->data=7;
	third->data=8;
	fourth->data=9;
	fifth->data=6;
	sixth->data=90;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=sixth;
	sixth->next=head;
	cout<<"Before division :"<<endl;
	display(head);
	pair<Node*,Node*> ans=divideCLL(head);
	cout<<"After division :"<<endl;
	display(ans.first);
	display(ans.second);
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
		cout<<ptr->data<<" ";
		ptr=ptr->next;
	}while(ptr!=NULL && ptr!=head);
	cout<<endl;
}

pair<Node*,Node*> divideCLL(Node* head){
	pair<Node*,Node*> ans;
	Node *fast=head,*slow=head;
	while(fast->next!=head && fast->next->next!=head){
		fast=fast->next->next;
		slow=slow->next;
	}
	Node*temp = slow->next;
	slow->next=head;
	ans.first=head;
	if(fast->next==head){
		fast->next=temp;
	}
	else{
		fast->next->next=temp;
	}
	ans.second=temp;
	return ans;
}