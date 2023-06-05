
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &vec,int s , int e){
    int mid = s +(e-s)/2;
    int len1 = mid -s +1;
    int len2 = e - mid;

    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    int main_index = s;//used when merge the 2 array and write to the vector

    for(int i = 0 ; i <len1;i++)
    {
        arr1[i] = vec[main_index++];
    }
    // main_index = mid +1;//do check this 
    for(int i = 0 ; i <len2;i++){
        arr2[i] = vec[main_index++];
    }

    int index1 = 0 ;
    int index2 = 0;
    main_index = s;
    while (index1<len1 && index2<len2)      
    {
        if(arr1[index1]<arr2[index2]){
            vec[main_index++] = arr1[index1++];
        }else {
            vec[main_index++] = arr2[index2++];
        }
    }
    while(index1<len1){
        vec[main_index++] = arr1[index1++];
    }
    while(index2<len2){
        vec[main_index++] = arr2[index2++];
    }
    delete []arr1;
    delete []arr2;
}

void mergeSort(vector<int> &vec,int s ,int e){
    if(s>=e){ //s == e then vec didvided in 1 that is considered as sorted.
        return;
    }
    // cout <<"Hi"<<endl;
    int mid = s + (e-s)/2;

    //sort 1st part of vec
    mergeSort(vec,s,mid);

    //sort 2nd part of vec
    mergeSort(vec,mid+1,e);

    //mergre them
    merge(vec,s,e);
}


int main(){

    vector<int> vec = {4,8,6,5,2,475,0,56,2};
    mergeSort(vec,0,vec.size()-1);
    for(int i = 0 ; i <vec.size();i++){
        cout << vec[i]<<" ";
    }cout <<endl;

    
    return 0;
}