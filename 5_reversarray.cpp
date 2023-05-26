#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int n = size -1;
    if(size%2 != 0){
        size = size /2 +1;
        cout << "SIZE" << size<<endl;
    }else{
        size= size/2;
    }
    for(int i = 0 ; i<size ; i++){
        swap(arr[i],arr[n -i]);
    }
}
void printArray(int arr[],int size){
    for(int i = 0 ; i< size; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
}
int main(){
    int arr[4] = {8,1,0,7};
    reverse(arr,4);

    printArray(arr,4);
    return 0;
}