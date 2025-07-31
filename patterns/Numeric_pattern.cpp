#include <iostream>
using namespace std;

int main (){
    int n ;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++){

          for(int j=5;j>=i;j--){

            cout<<"  ";

        }

        for(int j=1;j<=i+1;j++){

            cout<<" "<<j+i;

        }
        for(int j=i+1;j>1;j--){

            cout<<" "<<j+i-1;

        }

        cout<<endl;
    }



    return 0;
}