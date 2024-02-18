#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node*left;
    Node*right;

    Node(int data){
      this->data=data;
      this->left=NULL;
      this->right=NULL;
    }
};

Node* buildTree(Node* root){
    int data;
    cout<<"Enter the data : "<<endl;
    cin>>data;
    root=new Node(data);

    if(data == -1){
      return NULL;
    }
    cout<<"Enter the left node of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the right node of "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void traverse(Node * root){
    queue<Node*> q;
    Node* temp;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        temp=q.front();
        q.pop();
        if(temp==NULL){
          cout<<endl;
          if(!q.empty()){
            q.push(NULL);
          }
          continue;
        }else{
          cout<<temp->data<<" ";
        }
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
          q.push(temp->right);
        }
    }
}

void preOrder(Node* root){
    if(root == NULL){
      return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
  Node *root;

  // 5 6 2 -1 -1 3 2 -1 -1 6 -1 -1 9 6 -1 -1 -1

  root = buildTree(root);
  traverse(root);
  cout<<"Preorder traversal "<<endl;
  preOrder(root);

}