#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data=ch;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            isTerminal=false;
        }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode*root,string word){

        if(word.length()==0){
            root->isTerminal=true;
            return;
        }

        int idx=word[0]-'a';
        TrieNode*temp;
        if(root->children[idx]){
            temp=root->children[idx];
        }
        else{
            temp=new TrieNode(word[0]);
            root->children[idx]=temp;
        }
        insertUtil(temp,word.substr(1));
    }

    void insert(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode*root,string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        int idx=word[0]-'a';
        TrieNode*temp;
        if(root->children[idx]){
            temp=root->children[idx];
            return searchUtil(temp,word.substr(1));
        }
        else{
            return false;
        }
    }

    bool search(string word){
        return searchUtil(root,word);
    }

    void removeUtil(TrieNode* root,string word){
        if(word.length()==0){
            if(root->isTerminal){
                root->isTerminal=false;
                return;
            }
            else{
                cout<<"Word is not present."<<endl;
                return;
            }
        }

        int idx=word[0]-'a';
        TrieNode* temp;
        if(root->children[idx]){
            temp=root->children[idx];
            removeUtil(temp,word.substr(1));
        }
        else{
            cout<<"Word is not present."<<endl;
            return;
        }
    }

    void remove(string word){
        removeUtil(root,word);
    }
};

int main(){

    Trie* t=new Trie();
    t->insert("abcd");
    t->insert("hello");
    cout<<"Item is "<<t->search("hello")<<endl;
    t->remove("hello");
    cout<<"Item is "<<t->search("hello")<<endl;

}