#include <iostream>
using namespace std;

//  X X X X X X   
//   X X X X X 
//    X X X X 
//     X X X
//      X X
//       X

int main (){
       for(int i=6;i>=1;i--){

        for(int j=1;j<=6;j++){
            if(i>j){
                cout<<" ";
            }else{

                cout<<"X ";
            }
        }
        cout<<"\n";
    }
    for(int i=1;i<=6;i++){

        for(int j=1;j<=6;j++){
            if(i>j){
                cout<<" ";
            }else{

                cout<<" X";
            }
        }
        cout<<"\n";
    }
}