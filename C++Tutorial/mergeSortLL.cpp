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

Node* findMid(Node*head){
    Node*slow=head,*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

Node* merge(Node*left,Node*right){
    if(left == NULL) return right;
    if(right == NULL) return left;

    Node*ans=NULL,*temp=NULL;
    if(left->data < right->data){
        ans=left;
        left=left->next;
    }
    else{
        ans=right;
        right=right->next;
    }
    temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
        temp->next=left;
        temp=left;
        left=left->next;
    }
    else{
        temp->next=right;
        temp=right;
        right=right->next;
    }
    }
    if(left!=NULL){
        temp->next=left;
    }
    if(right!=NULL){
        temp->next=right;
    }
    return ans;
}

Node* mergeSort(Node*head){
    if(head==NULL || head->next==NULL) return head;
    Node* mid=findMid(head);
    Node*left=head;
    Node*right=mid->next;
    mid->next=NULL;

    left=mergeSort(left);
    right=mergeSort(right);

    Node* ans=merge(left,right);
    return ans;
}

int main(){
    
	Node* head1=NULL;
	Node*first1=new Node;
	Node*second1=new Node;
    Node*third1=new Node;
    Node*forth1=new Node;
    Node*fifth1=new Node;
    Node*sixth1=new Node;
	head1=first1;
	first1->data=6;
	second1->data=7;
    third1->data=5;
    forth1->data=3;
    fifth1->data=9;
    sixth1->data=4;
	first1->next=second1;
	second1->next=third1;
    third1->next=forth1;
    forth1->next=fifth1;
    fifth1->next=sixth1;
    sixth1->next=NULL;
    Node*ans=mergeSort(head1);
    display(ans);

}