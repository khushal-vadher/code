#include <bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100] ;
    int size ;
    Heap(){
        size = 0;
    }
    void insertInHeap(int val){
        size++;
        arr[size] = val;
        int index = size;
        while(index>1){
            //parent index
            int parent = index/2;
            if(arr[parent] <arr[index]){
                swap(arr[parent],arr[index]);
            }else{
                return; 
            }
        }

        
    }

    void deleteFromHeap(){ //delete root
        if(size == 0){
            cout <<"Size = 0 bro....how can i delete"<<endl;
        }

        arr[1] =arr[size];
        size--; //so that last element can not be accessed and not the part of heap now

        int i =1;
        while(i<size){
            int left = 2*i;
            int right = 2*i +1;
            if(left <size && arr[left] > arr[i]){
                swap(arr[i],arr[left]);
                i =left;
            }
            if(right <size && arr[right] > arr[i]){
                swap(arr[i],arr[right]);
                i = right;
            }
            else{
                return;
            }
        }
    }


    void print(){
        for(int i =1;i<=size;i++){
            cout <<arr[i]<<" ";
        }cout <<endl;
    }
    
};


void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i +1;
    if(left<=n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right<=n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    int size = n;
    while(size>1){
        swap(arr[1],arr[size]);
        size--;
        heapify(arr,size,1); 
    }
}

int main() {

    Heap h;
    h.insertInHeap(50);
    h.insertInHeap(55);
    h.insertInHeap(53);
    h.insertInHeap(52);
    h.insertInHeap(54);
    h.print();
    h.deleteFromHeap();

    h.print();


    cout <<"Do heapify :"<<endl;

    int temp[6] = {-1,53,55,52,50,54};
    int n = 5;
    for(int i = n/2; i>0;i--){
        heapify(temp,n,i);
    }
    // heapify(temp,n,)]
    for(int i =1 ; i<n;i++){
        cout <<temp[i]<<" ";
    }cout<<endl;


    cout <<"Heap Sort" <<endl;
    heapSort(temp,n);

    for(int i =1 ; i<n;i++){
        cout <<temp[i]<<" ";
    }cout<<endl;
    
    return 0;
}