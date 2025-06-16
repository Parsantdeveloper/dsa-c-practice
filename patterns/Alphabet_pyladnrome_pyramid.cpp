#include <iostream>
using namespace std;

int main (){
    int n ;
    cin>>n;
    char decimal;
    for(int i =0;i<n;i++){
        for(int j=0;j<i+1;j++){
            decimal=65+j;
            cout<<decimal;
        }
        for(int j=0;j<i;j++){
            decimal=decimal-1;
            cout<<decimal;
        }
        
        cout<<endl;
    }
}