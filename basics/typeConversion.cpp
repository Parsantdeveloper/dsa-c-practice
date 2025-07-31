#include <iostream>

int main (){
    // double pi = (int)3.4;  implict 
    // std::cout <<pi;
     int marks = 10 ;
     int score = 8 ; 
     int percentage = (score/(double)marks)*100; //explicit
     std::cout<<percentage << "%";
    return 0;
}