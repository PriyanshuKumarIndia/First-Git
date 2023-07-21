#include<iostream>
using namespace std;
class student{
    string name;
    int rollno;
    public:
    void setdata(string a,int r){
        name=a;
        rollno=r;
    }
    void display(){
        cout<<"Name of the student is "<<name<<endl;
        cout<<"Roll no is "<<rollno<<endl;
    }
};
int main(){
    student priyanshu[5];
    int i;
    for(i=0;i<5;i++){
        string name;
        int roll;
        cout<<"Enter the name of student no. "<<i+1<<endl;
        cin>>name;
        cout<<"Enter the roll numner : ";
        cin>>roll;
        priyanshu[i].setdata(name,roll);
    }
    cout<<"\nDisplaying the data\n"<<endl;
    for(i=0;i<5;i++){
        priyanshu[i].display();
        cout<<endl;
    }
    // priyanshu.setdata("Priyanshu Kumar",429);
    // priyanshu.display();
}