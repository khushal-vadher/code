//stable algo
#include<bits/stdc++.h>
using namespace std;

int comparisons = 0;

void insertionSort(int arr[],int size){
    for(int i = 1 ; i <size;i++){
        int temp = arr[i];
        int j = 0;
        for(j = i-1 ; j>=0;j--){
            comparisons++;
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }else{
                break;
            }
        }
        arr[j+1] = temp;

    }
}
int main(){
    int size =6;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i <size;i++){
        cin >>arr[i];
    }
    insertionSort(arr,size);
    for(int i = 0 ; i <size;i++){
        cout <<arr[i] <<" ";
    }
    cout<<endl <<"no of comparisons : "<<comparisons <<endl;
    return 0;
}