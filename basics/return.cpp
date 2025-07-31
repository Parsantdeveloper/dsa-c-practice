#include<iostream>
using namespace std;

double area(double length, double breadth){
    return length*breadth;
}

int main (){
    cout<<"finding are of rectangle ";
    int length;
    int breadth;
    cin >> length;
    cin >>breadth;
    double Area = area(length,breadth);
    cout<<"area of a rectangle is "<<Area;
    return 0;
}