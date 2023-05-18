#include<iostream>
using namespace std;

int noOfSetbits(int a){
    int bits = 0;
    while(a){
        if(a&1){
            bits++;
        }
        a=a>>1;
    }
    return bits;
}

int main(){
    int bits = noOfSetbits(7) + noOfSetbits(2);
    cout <<bits<<endl;
    return 0;
}