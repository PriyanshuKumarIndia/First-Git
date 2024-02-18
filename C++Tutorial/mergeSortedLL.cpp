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

Node* mergeLL(Node* head1,Node* head2);

void display(Node*head){
	Node* temp=head;
	while(temp!=NULL){
		if(temp->next==NULL){
			cout<<temp->data;
			temp=temp->next;
			continue;
		}
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}

int main(){
	
	Node* head1=NULL;
	Node*first1=new Node;
	Node*second1=new Node;
	Node*third1=new Node;
	Node*fourth1=new Node;
	Node*fifth1=new Node;
	Node* sixth1=new Node;
	head1=first1;
	first1->data=6;
	second1->data=7;
	third1->data=8;
	first1->next=second1;
	second1->next=third1;
	third1->next=NULL;
	display(head1);
	Node* head2=NULL;
	Node*first2=new Node;
	Node*second2=new Node;
	Node*third2=new Node;
	Node*fourth2=new Node;
	Node*fifth2=new Node;
	Node* sixth2=new Node;
	head2=first2;
	first2->data=1;
	second2->data=3;
	third2->data=5;
	fourth2->data=9;
	fifth2->data=12;
	sixth2->data=15;
	first2->next=second2;
	second2->next=third2;
	third2->next=fourth2;
	fourth2->next=fifth2;
	fifth2->next=sixth2;
	sixth2->next=NULL;
	display(head2);

	head1=mergeLL(head1,head2);
	display(head1);
}

Node* mergeLL(Node* head1,Node* head2){
	Node* back1=NULL,*forward1=head1,*forward2=head2,*temp=NULL;
	while(forward1!=NULL && forward2!=NULL){
		if(forward1->data > forward2->data){
			temp=forward2;
			forward2=forward2->next;
			if(back1==NULL){
				back1=temp;
				head1=temp;
				temp->next=forward1;
				continue;
			}
			back1->next=temp;
			temp->next=forward1;
			back1=back1->next;
			temp=NULL;
		}
		else{
			back1=back1->next;
			forward1=forward1->next;
		}
	}
	if(forward1==NULL){
		back1->next=forward2;
	}
	return head1;
}