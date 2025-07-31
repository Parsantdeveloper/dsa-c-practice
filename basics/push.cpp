#include <iostream>
#include <vector>
using namespace std ;

 void push(int num,vector<int>& arr){
    vector<int> newArr(arr.size()+1);
    for(int i=0;i<newArr.size();i++){
      newArr[i]=arr[i];
    }
    newArr[arr.size()]=num;
    arr=newArr;
    cout<<newArr.size()<<"it is length of newArr"<<'\n';
 }
 
int main (){
    
    vector<int> arr={1,2,3,4,5};
    cout<<arr.size()<<"\n";
    push(6,arr);
    for(int i =0 ; i<arr.size();i++){
        cout<<arr[i];
    }
    return 0;

}