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

void display(Node* head){
	Node* ptr =head;
	do{
		cout<<ptr->data<<" "<<ptr<<endl;
		ptr=ptr->next;
	}while(ptr!=NULL && ptr!=head);
    cout<<endl;
}

pair<int,Node*> detectRandomLoop(Node* head){
    vector<Node*> arr;
	pair<int,Node*> pr;
	Node* ptr=head;
	
	while(ptr->next!=NULL && !Find(arr,ptr->next)){
		arr.push_back(ptr);
		ptr=ptr->next;
	}
	pr.first=ptr->next->data;
	pr.second=ptr->next;
	ptr->next=NULL;
	return pr;
}

int main(){
	// #ifndef ONLINE_JUDGE
		// freopen("input.txt","r",stdin);
		// freopen("output.txt","w",stdout);
	// #endif
	Node*first=new Node;
	Node* head=NULL;
	Node*second=new Node;
	Node*third=new Node;
	Node*fourth=new Node;
	Node*fifth=new Node;
	head=first;
	first->data=6;
	second->data=7;
	third->data=8;
	fourth->data=9;
	fifth->data=10;
	first->next=second;
	second->next=third;
	third->next=fourth;
	fourth->next=fifth;
	fifth->next=third;
	pair<int,Node*> pr=detectRandomLoop(head);
	cout<<pr.first<<" "<<pr.second<<endl;
	display(head);

}