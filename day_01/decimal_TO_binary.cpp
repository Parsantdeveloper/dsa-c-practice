#include <iostream>
using namespace std;
#include<vector>
int main (){

    int decimal=10;
    int remaining=0;
    vector <int> binary;
    binary[0]=1;
    cout<<binary[0];
    // cout<<"Decimal to Binary -------------------->"<<endl ;
    // cout<<decimal%2<<endl;
    // while(decimal!=0){
    //     if(decimal%2==0){
    //         binary=0;
    //         remaining=decimal/2;
    //         cout<<"remaining decimal is "<<remaining<<endl;
   
    //     }else{
    //         cout<<"else running or not"<<endl;
    //          binary=1;
    //          remaining=decimal/2;
    //     }
    //     decimal=remaining;
    // }
    //  cout<<"binary is "<<binary<<endl;
    //  cout<<"final decimal is "<<decimal;
    return 0;
}