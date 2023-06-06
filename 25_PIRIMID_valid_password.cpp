#include<bits/stdc++.h>
using namespace std;


int factorial(int x){
    if(x == 0){
        return 1;
    }else{
        return x*factorial(x-1);
    }
}


int countValidPasswords(int n, int k) {
    int count =1;
    int t_k = 1;
    int main_count = 0;
    if(n>=k){

        do{
            int fact = factorial(t_k);
            int temp = n - t_k + 1;
            int multipy = 26;
            count = (count %1000000007)*(fact%1000000007);
            for(int i = 0 ; i<temp;i++){
                count = (count %1000000007)*(multipy);
                multipy--;
            }
            cout << "count "<<count<<endl;
            cout <<"t_k"<<" "<<t_k<<endl;
            t_k++;
            multipy = 26;
            main_count +=count;
            count =1;
            cout <<"Main "<<main_count<<endl;

        }while(t_k!=k);
    }
    return main_count;
}



int main(){

    cout << countValidPasswords(6,6);

    return 0;

}