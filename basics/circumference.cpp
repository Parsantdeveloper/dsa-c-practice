#include <iostream>
using namespace std;
#include <cmath>
int main (){
   // using const prevents changes on the variables value just like javascript 
    const double pi=3.14;
    int radius = 6 ;
    double circumference = (2*pi*radius);

    cout << circumference;

     return 0 ;
}