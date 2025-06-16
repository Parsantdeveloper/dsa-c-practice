#include <iostream>
using namespace std;

//        X
//       X X
//      X   X
//     X     X
//    X       X
//    X       X
//     X     X
//      X   X
//       X X
//        X



int main (){
    int n;
   cin>>n;
    for(int i=n;i>=1;i--){
      for(int j=1;j<=n;j++){
        if(i>j){
            cout<<" ";
        }else if(j!=n && i!=j){
         cout<<"  ";
        }
        else{
          cout<<"X ";
        }
      }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(i>j){
            cout<<" ";
        }else if(j!=n && i!=j){
         cout<<"  ";

        }
        else{
          cout<<"X ";
        }
      }
        cout<<endl;
    }
    return 0;
}