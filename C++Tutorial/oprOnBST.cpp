#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node*left,*right;

    Node(int data){
      this->data=data;
      left=NULL;
      right=NULL;
    }
};

int findPre(Node* root,int key){
    int pre=-1;
    Node* temp=root;
    while(temp){
        if(temp->data==key){
            if(temp->left){
                Node*ptr=temp->left;
                while(ptr->right){
                  ptr=ptr->right;
                }
                pre=ptr->data;
            }
            break;
        }
        else if(temp->data<key){
            pre=temp->data;
            temp=temp->right;
        }else{
          temp=temp->left;
        }
    }
    return pre;
}

void inOrder(Node* root){
    if(root==NULL){
      return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root){
    if(root==NULL){
      return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

Node* insertIntoBSt(Node*root,int data){
    if(root==NULL){
      root=new Node(data);
      return root;
    }
    if(root->data > data){
      root->left=insertIntoBSt(root->left,data);
    }
    else{
      root->right=insertIntoBSt(root->right,data);
    }
}

void takeInput(Node* &root){
  int data;
  cin>>data;
  while(data!=-1){
    root=insertIntoBSt(root,data);
    cin>>data;
  }
}

Node* delNode(Node* root,int val){
    if(root==NULL){
      return root;
    }

    if(root->data==val){
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        else if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        else if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        else{
            int pre=findPre(root,val);
            root->data=pre;
            root->left=delNode(root->left,pre);
        }
    }
    else if(root->data>val){
        root->left=delNode(root->left,val);
    }else{
        root->right=delNode(root->right,val);
    }
}

int main(){
   Node* root=NULL;
   takeInput(root);
   cout<<endl<<"Before deleting "<<endl;
   preOrder(root);
   cout<<endl;
   inOrder(root);
   root=delNode(root,78);
   cout<<endl<<"After deleting "<<endl;
   preOrder(root);
   cout<<endl;
   inOrder(root);

}