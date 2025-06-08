#include <iostream>
using namespace std;
#include <ctime>

int main (){

     srand(time(NULL));
     int tries=0;
     int number=(rand()%100)+1;
     int guess;
     cout<<"******** number guessing games ********"<<"\n";
     
     do{
       cout<<"enter a guess number "<<"\n";
       cin>>guess;
       tries++;
       if(guess<number){
        cout<<"gues is too low";
       }else if(guess>number){
       cout<<"guess is too high";
       }
       else{
        cout<<"you correctly guessed the number!! your tries are "<<tries;
       }
     }while(number!=guess);

    return 0;
    }