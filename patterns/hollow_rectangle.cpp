#include<iostream>
using namespace std;

int main (){
    cout<<"printing patterns "<<"\n";
    for(int i =1;i<=3;i++){
       for(int j=1;j<=5;j++){
        if(i==2&&j!=1&&j!=5){
            cout<<"  ";
        }else{    
           cout<<"X ";
        }
       }
       cout<<"\n";
    }

}