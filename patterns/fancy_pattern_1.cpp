#include <iostream>
using namespace std;

int main (){
   for(int i =1 ; i<=4;i++){
    for(int j =1; j<=i;j++){
        if(i>j){

            cout<<i<<" X ";
        }else{

            cout<<i;
        }
       
    }
    cout<<endl;
   }
   for(int i =4 ; i>=1;i--){
    for(int j =1; j<=i;j++){
if(i>j){

            cout<<i<<" X ";
        }else{

            cout<<i;
        }    }
    cout<<endl;
   }
    return 0;
}