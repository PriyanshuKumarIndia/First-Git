#include <iostream>
using namespace std;
class calculator
{
    int a, b,c;

public:
    int getdata(int a1, int a2,int a3,int a4);
    int printdata(void);
    int sum();
    int d,e,f;
};
int calculator :: getdata(int a1,int a2,int a3,int a4){
    a=a1;
    b=a2;
    d=a3;
    e=a4;
}
int calculator :: printdata(){
    cout<<a<<"+"<<b<<"="<<c<<endl;
    cout<<d<<"*"<<e<<"="<<f;
}
int calculator :: sum(){
    c=a+b;
    
}
class bro : public calculator{
    public :
    int mul();
};
int bro :: mul(){
    
    f=d*e;
}
int main()
{
    bro perform;
   // calculator perform;
    perform.getdata(5,4,9,6);
    perform.sum();
    perform.mul();
    perform.printdata();
}