#include <iostream>

int main (){
    std::string name;
     int age ;
  std::cout<<"what is you name ?";
  std::getline(std::cin>>std::ws,name);
  std::cout<<"what is your age ?";
  std::cin>>age;
  std::cout<<"your name is "<<name;
  std::cout<<" and you are "<<age<<" years old";
   return 0;
}