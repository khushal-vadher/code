#include<bits/stdc++.h>
using namespace std;

int comparisons = 0;

void selectionSort(int arr[],int size){
    for(int i = 0 ; i<size-1;i++){
        for(int j = i+1 ; j<size;j++){
            comparisons++;
            if(arr[i] >arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){

    int arr[6] = {12,1,8,5,3,0};
    int size = sizeof(arr) /sizeof(arr[0]);
    selectionSort(arr,size);
    for(int i = 0 ; i <size;i++){
        cout <<arr[i] <<" ";
    }
    cout<<endl <<"no of comparisons : "<<comparisons <<endl;
    return 0;
}