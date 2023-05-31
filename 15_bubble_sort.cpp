//can make best case TC as O(n)by butting isSWapedd boolean var with not a single time swapped in 1st itration of for with i  then 
// break outter for and return "already sorted"
#include<bits/stdc++.h>
using namespace std;

int comparisons = 0;

void bubbleSort(int arr[],int size){
    bool isSwapped = false;
    for(int i= 1 ; i<=size;i++){
        isSwapped = false;
        for(int j = 0;j<size-i;j++){
            comparisons++;
            if(arr[j]>arr[j+1]){
                swap(arr[j+1],arr[j]);
                isSwapped = true;
            }
        }
        if(!isSwapped){
            break;
        }
    }

}
int main(){
    int size =6;
    cin>>size;
    int arr[size];
    for(int i = 0 ; i <size;i++){
        cin >>arr[i];
    }
    bubbleSort(arr,size);
    for(int i = 0 ; i <size;i++){
        cout <<arr[i] <<" ";
    }
    cout<<endl <<"no of comparisons : "<<comparisons <<endl;
    return 0;
}