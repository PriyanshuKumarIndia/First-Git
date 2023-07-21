#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
};
void display(node*head){
    node*p=head;
     do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=NULL);
}
int main()
{
    node * head;
    head=NULL;
    node*first=new node;
    first->data=23;
    first->next=NULL;
    head=first;
    node*second=new node;
    second->data=89;
    second->next=NULL;
    first->next=second;
    node*third=new node;
    third->data=87;
    third->next=NULL;
    second->next=third;
    node*fourth=new node;
    fourth->data=47;
    fourth->next=NULL;
    third->next=fourth;
    node*fifth=new node;
    fifth->data=67;
    fifth->next=NULL;
    fourth->next=fifth;
    int choice,i;
    cout<<"Enter 1. To insert node in the linked list."<<endl
        <<"Enter 2. To delete node from the linked list."<<endl
        <<"Enter 3. To search node from the linked list."<<endl
        <<"Enter 4. To display the node."<<endl
        <<"Enter your choice : ";
    cin>>choice; 
    switch(choice){
        case 1:{
            int pos,value;
            node*temp=new node,*ptr=head;
            cout<<"Enter the position to insert the node : ";
            cin>>pos;
            if(pos<1 || pos>6){
                cout<<"Invalid position..... Try again!"<<endl;
                break;
            }
            cout<<"Enter the value : ";
            cin>>value;
            temp->data=value;
             if(pos==1){
                temp->next=head;
                head=temp;
                cout<<"Inserting sucessfull !"<<endl;
                break;
            }
            for(i=2;i<pos;i++){
                ptr=ptr->next;
            }
            temp->next=ptr->next;
            ptr->next=temp;
            cout<<"Inserting sucessfull !"<<endl;
            break;
        }

        case 2:{
            int pos;
            node*ptr2=head,*ptr3;
            cout<<"Enter the position to delete : ";
            cin>>pos;
            if(pos<1 || pos>6){
                cout<<"Invalid position..... Try again!";
                break;
            }
            if(pos==1){
                ptr3=head;
                head=head->next;
                free(ptr3);
                cout<<"Deleting sucessful !"<<endl;
                break;
            }
            for(i=1;i<pos-1;i++){
                ptr2=ptr2->next;
            }
            
            if(ptr2==NULL){
                cout<<"No element at the position.";
                break;
            }
            ptr3=ptr2->next;
            ptr2->next=ptr3->next;
            free(ptr3);
            cout<<"Deleting sucessful !"<<endl;
            break;
        }

        case 3:{
            int element,count=0;
            node*search=head;
            cout<<"Enter the element to search : ";
            cin>>element;
            do{
                if(search->data==element){
                    count++;
                    cout<<"Node found !"<<endl;
                    break;
                }
                else
                search=search->next;
            }while(search->next!=NULL);
            if(count==0){
            cout<<"Node not found !"<<endl;
            break;
            }
            else
            break;
        }

        case 4:{
            cout<<"Displaying the node :"<<endl;
            display(head);
            return 0;
        }
        default:{
            cout<<"Enter valid choice."<<endl;
        }
    }
    cout<<"Here is the final list :"<<endl;
    display(head);
    return 0;
}