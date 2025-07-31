//namespace = provides a soln for preventing name conflicts in large projects 
//            each entity need a unique name . A namespace allows for identically
//            named entities as long as the namespace are different 


#include<iostream>
 
namespace first {
    int x =4;
}
namespace second{
    int x=5;
}
int main (){
     int x =3;
     std::cout << x << "\n" ; //3 
     std::cout << first::x << "\n"; //4 
     std::cout <<second::x << "\n"; //5

    return 0 ;
}