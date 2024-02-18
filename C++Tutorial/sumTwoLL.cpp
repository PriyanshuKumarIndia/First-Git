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

Node* reverseLL(Node* head){
        if(head->next==NULL) return head;
    Node* cur=head,*prev=NULL,*nex;
        while(cur!=NULL){
            nex=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
        }
        return prev;
}

Node* sumLL(Node*head1,Node*head2){
	head1=reverseLL(head1);
	head2=reverseLL(head2);
	Node*ptr1=head1,*ptr2=head2,*ans=NULL;
	int carry=0;
	while(ptr1!=NULL || ptr2!=NULL || carry!=0){
		int val1=0,val2=0;
		if(ptr1!=NULL) val1=ptr1->data;
		if(ptr2!=NULL) val2=ptr2->data;
		int sum=val1+val2+carry;
		carry=sum/10;
		Node*temp=new Node(sum%10);
		if(ans==NULL){
			ans=temp;
		}
		else{
			Node * ptr=ans;
			while(ptr->next!=NULL){
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
		if(ptr1!=NULL)
		ptr1=ptr1->next;
		if(ptr2!=NULL)
		ptr2=ptr2->next;
	}
	ans=reverseLL(ans);
	return ans;
}

int main(){
	
	Node* head1=NULL;
	Node*first1=new Node;
	Node*second1=new Node;
	head1=first1;
	first1->data=6;
	second1->data=7;
	first1->next=second1;
	second1->next=NULL;
	// display(head1);
	Node* head2=NULL;
	Node*first2=new Node;
	Node*second2=new Node;
	Node*third2=new Node;
	head2=first2;
	first2->data=9;
	second2->data=3;
	third2->data=5;
	first2->next=second2;
	second2->next=third2;
	third2->next=NULL;
	// display(head2);
	Node* head3=sumLL(head1,head2);
	display(head3);
}
