
let arr=[2,5,6]
let arr2=[1,3,4,8];
let temp=[];

let i=0,j=0;k=0;

while(temp.length<arr.length+arr2.length){
if(arr[i]<arr2[j]){
   temp[k++]=arr[i++];
   
}else{
    temp[k++]=arr2[j++];
   
}
}
console.log(temp);