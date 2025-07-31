#include<iostream>
using namespace std;
#include <cmath>

int main (){
    int a;
    int b ;
     cout << "find hypotenous of traingle ";
     cin>>a;
     cin>>b;
     double hyp = sqrt(pow(a,2)+pow(b,2));
     cout << " hypotenous of traingle is "<<hyp;
    return 0;
}