#include <iostream>
using namespace std ;
#include <cmath>

int main (){
  cout<<"enter first input";
  double firstInp=0;
  cin>>firstInp;
  cout<<"enter second input";
  double secondInp=0;
  cin>>secondInp;
  char symbol ;
  cout<<"symbols are +,-,/,*  enter any symbols";
  cin>>symbol;
  double calculation;
  switch(symbol){
    case '+':
   calculation= firstInp+secondInp;
    break;

    case '*':
    calculation=firstInp*secondInp;
    break;
    case '/':
    calculation=firstInp/secondInp;
    break;
    case '-':
    calculation=firstInp-secondInp;
    break;
  }
  cout<< calculation;
  return 0;
}   