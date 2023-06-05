
#include<bits/stdc++.h>
using namespace std;

auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    return 0;
}();

int partition(vector<int> &arr ,int s ,int e){
    int pivot =arr[s];
    int count = 0;
    for(int i = s+1; i<=e;i++){
        if(arr[i]<=pivot)count++;
    }
    int pivotIndex = s+count;
    swap(arr[pivotIndex],arr[s]);

    //two pointer 
    int i = s,j = e;
    while (i<pivotIndex && j>pivotIndex)    
    {
        while(arr[i]<=pivot){
            i++;
        }while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
    
}


void quickSort(vector<int> &arr,int s ,int e)
{
    if(s>=e){
        return;
    }

    int pivot = partition(arr,s,e);

    quickSort(arr,0,pivot-1);
    quickSort(arr,pivot+1,e);
}
int main(){
    vector<int> arr = {0,5,7,9,2,3,11,0,125};
    int size = arr.size()-1;
    quickSort(arr,0,size);
    for(int i= 0 ;i<size+1;i++){
        cout << arr[i]<<" ";
    }cout <<endl;
    
    return 0;
}