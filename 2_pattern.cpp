#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int row = 1;
    while(row<=n){
        //space print
        int space = n - row  ;
        while (space > 0)
        {
            cout <<" ";
            space -=1;
        }

        //1st triangle
        int num =  1;
        while (num<=row)
        {
            cout << num ;
            num++;
        }
        int n1 = row;
        while(row >1 && n1<=row && n1 > 1)
        {
            cout << n1-1;
            n1--;
        }
        cout <<endl;
        row++;

        
        
    }

    return 0;
}