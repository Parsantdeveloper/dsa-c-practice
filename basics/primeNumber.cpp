#include <iostream>
using namespace std;
#include<cmath>
int main (){

    int input =19;
    bool isPrime=true;

    if(input==1){
        isPrime=false;
    }else if(input>2){
        for(int i=2 ; i<=sqrt(input);i++){
            if(input%i==0){
                isPrime=false;
                break;
            } 
        }
    }
    if(isPrime==true){
        cout<<"prime number";
    }else{
        cout<<"composite number ";
    }
    return 0;
}