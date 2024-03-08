<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

class heap{
  public:
    int arr[100];
    int size;

    heap(){
      size=0;
      arr[0]=-1;
    }

    void insert(int val){
        size+=1;
        int idx=size;
        arr[idx]=val;

        while(idx>1){
            int parent=idx/2;
            if(arr[parent]<arr[idx]){
                swap(arr[parent],arr[idx]);
                idx=parent;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void del(){
        if(size==0){
            cout<<"Heap is Empty"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int idx=1;
        while(idx<size){
            int leftIdx=idx*2;
            int rightIdx=idx*2+1;
            int temp;
            if(leftIdx<size && rightIdx<size){
                if(arr[leftIdx]>arr[rightIdx]){
                    temp=leftIdx;
                }else{
                    temp=rightIdx;
                }
            }
            else if(leftIdx<size){
                temp=leftIdx;
            }
            else{
              return;
            }
            if(arr[temp]>arr[idx]){
                swap(arr[temp],arr[idx]);
                idx=temp;
            }
            else{
              return;
            }
        }
    }


};

void maxHeapify(int arr[],int n,int idx){
    int largest=idx;
    int left=2*idx;
    int right=2*idx+1;
    if(left<=n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=idx){
        swap(arr[largest],arr[idx]);
        maxHeapify(arr,n,largest);
    }
}

void minHeapify(int arr[],int n,int idx){
    int smallest=idx;
    int left=2*idx;
    int right=2*idx+1;
    if(left<=n && arr[left]<arr[smallest]){
        smallest=left;
    }
    if(right<=n && arr[right]<arr[smallest]){
        smallest=right;
    }
    if(smallest!=idx){
        swap(arr[smallest],arr[idx]);
        minHeapify(arr,n,smallest);
    }
}

void heapSort(int arr[],int n){
    if(n<=1){
        return;
    }
    swap(arr[1],arr[n--]);
    maxHeapify(arr,n,1);
    heapSort(arr,n);
}

int main(){
    heap hp;
    hp.insert(45);
    hp.insert(54);
    hp.insert(36);
    hp.insert(65);
    hp.insert(89);
    hp.print();
    hp.del();
    hp.print();
    int arr[]={-1,55,53,54,52,50};
    // for(int i=5/2;i>0;i--){
    //     maxHeapify(arr,5,i);
    // }
    // cout<<"Printing Max heap "<<endl;
    // for(int i=1;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    //  for(int i=5/2;i>0;i--){
    //     minHeapify(arr,5,i);
    // }
    // cout<<"Printing Min heap "<<endl;
    // for(int i=1;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    heapSort(arr,5);
    cout<<"Printing Sorted heap "<<endl;
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    

=======
#include<bits/stdc++.h>
using namespace std;

class heap{
  public:
    int arr[100];
    int size;

    heap(){
      size=0;
      arr[0]=-1;
    }

    void insert(int val){
        size+=1;
        int idx=size;
        arr[idx]=val;

        while(idx>1){
            int parent=idx/2;
            if(arr[parent]<arr[idx]){
                swap(arr[parent],arr[idx]);
                idx=parent;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }

    void del(){
        if(size==0){
            cout<<"Heap is Empty"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int idx=1;
        while(idx<size){
            int leftIdx=idx*2;
            int rightIdx=idx*2+1;
            int temp;
            if(leftIdx<size && rightIdx<size){
                if(arr[leftIdx]>arr[rightIdx]){
                    temp=leftIdx;
                }else{
                    temp=rightIdx;
                }
            }
            else if(leftIdx<size){
                temp=leftIdx;
            }
            else{
              return;
            }
            if(arr[temp]>arr[idx]){
                swap(arr[temp],arr[idx]);
                idx=temp;
            }
            else{
              return;
            }
        }
    }


};

void maxHeapify(int arr[],int n,int idx){
    int largest=idx;
    int left=2*idx;
    int right=2*idx+1;
    if(left<=n && arr[left]>arr[largest]){
        largest=left;
    }
    if(right<=n && arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=idx){
        swap(arr[largest],arr[idx]);
        maxHeapify(arr,n,largest);
    }
}

void minHeapify(int arr[],int n,int idx){
    int smallest=idx;
    int left=2*idx;
    int right=2*idx+1;
    if(left<=n && arr[left]<arr[smallest]){
        smallest=left;
    }
    if(right<=n && arr[right]<arr[smallest]){
        smallest=right;
    }
    if(smallest!=idx){
        swap(arr[smallest],arr[idx]);
        minHeapify(arr,n,smallest);
    }
}

void heapSort(int arr[],int n){
    if(n<=1){
        return;
    }
    swap(arr[1],arr[n--]);
    maxHeapify(arr,n,1);
    heapSort(arr,n);
}

int main(){
    heap hp;
    hp.insert(45);
    hp.insert(54);
    hp.insert(36);
    hp.insert(65);
    hp.insert(89);
    hp.print();
    hp.del();
    hp.print();
    int arr[]={-1,55,53,54,52,50};
    // for(int i=5/2;i>0;i--){
    //     maxHeapify(arr,5,i);
    // }
    // cout<<"Printing Max heap "<<endl;
    // for(int i=1;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    //  for(int i=5/2;i>0;i--){
    //     minHeapify(arr,5,i);
    // }
    // cout<<"Printing Min heap "<<endl;
    // for(int i=1;i<6;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    heapSort(arr,5);
    cout<<"Printing Sorted heap "<<endl;
    for(int i=1;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    

>>>>>>> 3e389649bfec3270f80496fe2e21153260391733
}