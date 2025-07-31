#include <iostream>
using namespace std ;

int main (){
     cout<<"**** bank management system ****"<<"\n";
     double balance;
     double withdrawlAmount;
     double   deposit ;
     cout<<"add balance amount";
     cin>>balance;
     cout << "your balance is "<<balance;
     cout<<"add withdrawl amount ";
     cin>>withdrawlAmount;
     balance=balance-withdrawlAmount;
     cout<<"withdrawl "<<withdrawlAmount <<"successfully !";
     cout <<"your remaining balance is "<<balance;
     cout<<"deposint amount ";
     cin>>deposit;
     balance=balance+deposit;
     cout<<"your balance is "<<balance;

     return 0 ;

} 