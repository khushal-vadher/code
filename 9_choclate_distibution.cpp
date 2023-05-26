//https://www.geeksforgeeks.org/chocolate-distribution-problem/
// Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

// Each student gets one packet.
// The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.


// Input : arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 
// Output: Minimum Difference is 2 
// Explanation:
// We have seven packets of chocolates and we need to pick three packets for 3 students 
// If we pick 2, 3 and 4, we get the minimum difference between maximum and minimum packet sizes.

// Input : arr[] = {3, 4, 1, 9, 56, 7, 9, 12} , m = 5 
// Output: Minimum Difference is 6 

// Input : arr[] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} , m = 7 
// Output: Minimum Difference is 10 


#include<iostream>
#include<algorithm>
using namespace std;
int minDiff(int arr[] , int size,int m){
    sort(arr,arr + size );
    for(int i = 0 ;i <size;i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;
    int min = INT_MAX;
    for(int  i  =0 ;i<size - m +1 ;i++){
        int diff = arr[i+m -1] -arr[i];
        if(diff<min){
            min = diff;
        }
    }
    return min;
    //  for (int i = 0; i + m - 1 < size; i++) {
    //     int diff = arr[i + m - 1] - arr[i];
    //     if (diff < min)
    //         min = diff;
    // }
    // int temp[size-m]= {0};
    // for(int i = 0 ; i < size -m ;i++){
    //     temp[i]= arr[i+m] - arr[i];
    // }
    // sort(temp,temp + size -m);


    // int diff = arr[m-1] - arr[0];
    // for(int i = 0 ;i <size -m;i++){
    //     cout << temp[i] <<" ";
    // }

}

int main(){


    int arr[17] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50} ;

    int size = sizeof(arr) / sizeof(arr[0]);
    int m = 7;
    cout << "Diff :" <<minDiff(arr,size,m)<<endl;


   
    return 0;
}