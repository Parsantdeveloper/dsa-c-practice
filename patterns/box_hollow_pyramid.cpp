#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    for(int i =0;i<n;i++){

        for(int j=0; j<n-i;j++){
            cout<<"X";
        }

        for(int j =0;j<2*i+1;j++ ){
            cout<<" ";
        }
         for(int j=0; j<n-i;j++){
            cout<<"X";
        }

        cout<<endl;
    }
       for(int i=n;i>0;i--){

        for(int j=0; j<n-i+1;j++){
            cout<<"X";
        }

        for(int j =0;j<2*i-1;j++ ){
            cout<<" ";
        }
         for(int j=0; j<n-i+1;j++){
            cout<<"X";
        }

        cout<<endl;
    }
    return 0;
}