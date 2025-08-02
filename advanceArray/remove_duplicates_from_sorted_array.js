// let arr=[0,0,1,1,1,2,2,3,3,4];
// let i =0; j=0;
// while(j<arr.length-1){
//     if(arr[j]==arr[j+1]){
//         j++;
//     }else{
//         arr[i+1]=arr[j+1];
//         i++;
//         j++;
//     }
// }
//  console.log(arr);
//  console.log(i)


let arr=[0,0,1,1,1,2,2,3,3,4];
 let j=0;
   for(let i=0;i<arr.length-1;i++){
    if(arr[i]!=arr[i+1]){
         arr[j+1]=arr[i+1];
         j++;
    }
   }
 console.log(arr);
 console.log(j)