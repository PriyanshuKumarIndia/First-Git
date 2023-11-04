#include <iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,8,8},t1=0,t2=0,c=0;
    int counter =arr[0];
    for(int i=0;i<5;i++,counter++){
        if(counter!=arr[i]){
        t2=counter;
        c++;
        }
        if(arr[i]==arr[i+1]){
            t1=arr[i];
            i++;
            if(i==4){
            if((counter+1)!=arr[i]){
            t2=counter+1;
            c++;
            break;
            }
            }
        }
        if(t1!=0 && t2!=0) break;
    }
    if(c==0) t2=arr[0]+5-1;
    cout<<t1<<" is repeating and "<<t2<<" is missing."<<endl;
}