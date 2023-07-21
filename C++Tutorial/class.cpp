#include <iostream>
using namespace std;
class bro
    {
        private:
        int a,b,c;
        public:
        int d,e;
       void pro(int a1,int a2,int a3);
       void ans(){
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<'\n'<<endl<<a;
       }
    };
    void bro :: pro(int a1,int a2,int a3){
    
        a=a1;
        b=a2;
        c=a3;
    }
int main()
{
    bro pri;
    pri.pro(1,2,3);
    pri.d=90;
    pri.e=89;
    pri.ans();
    
}
