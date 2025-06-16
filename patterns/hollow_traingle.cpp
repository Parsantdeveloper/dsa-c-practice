  #include<iostream>
  using namespace std;
  
  for(int i=6;i>=1;i--){
       for(int j=1;j<=i;j++){
        if(i==6){
        cout<<"X ";
        }
       else if(j!=1 && j!=i){
        cout<<"  ";
        }else{
            cout<<"X ";
        }
    }
       cout<<"\n";
    }