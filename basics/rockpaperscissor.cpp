#include<iostream>
using namespace std;
#include<ctime>

void getScore(int userScore ,int computerScore){
 cout<<"user score "<< userScore<<"computer score "<<computerScore<<"\n";
}


int main (){
  int userScore=0;
  int computerScore=0;
  srand(time(0));
  char arr [3]={'r','p','s'};
  char computerChoice=arr[rand()%3];
   cout<<computerChoice<<"computer choice"<<"\n";
  int terminate=5;
  do{
  cout<<"working";
  cout<<"for termination enter 5 and to play any numbers"<<"\n";
  cin>>terminate;
  char userChoice ;
  cout<<"enter user choice"<<"\n";
  cin>>userChoice;
  if(userChoice!='r' && userChoice!='p' && userChoice!='s'){
    cout<<"you can choose r p and s only "<<"\n";
  }

   if(userChoice==computerChoice){
    cout<<"its draw !!"<<"\n";
   }else if (
     userChoice=='r'&&computerChoice=='p' || 
     userChoice=='p'&&computerChoice=='s' || 
     userChoice=='s'&&computerChoice=='r'
   ) {
    cout<<"you loose !!"<<"\n";
   }else{
        cout<<"you win !!"<<"\n";
   }
   break;

  }while(terminate!=5);
   
    return 0;

}

 