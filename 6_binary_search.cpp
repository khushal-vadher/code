#include<bits/stdc++.h>
using namespace std;

vector<int> binarySearch(int arr[],int key,int size){
    int start = 0;
    int end = size - 1;
    vector<int> res;
    
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid] == key){
            // cout<<"index = " <<mid << " : "<<arr[mid] <<endl;
            res.push_back(mid);
            res.push_back(arr[mid]);
            return res;
            break;
        }
        else if(arr[mid] >key){
            end = mid -1;
        }
        else if(arr[mid] < key){
            start =  mid  +1;
        }
        mid = (start+end)/2;
    }
    res.push_back(-1);
    res.push_back(-1);
    return res;
}
int main(){

    int arr[10] = {2,5,8,9,15,18,19,25,29,35};
    int key ;
    cin >> key;
    vector<int> res = binarySearch(arr,key,10);
    cout << res[0]<<" : " <<res[1]<<endl;
    return 0;
}