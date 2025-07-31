let arr=[1,2,3,4,5];
n=6
n=n%arr.length;
console.log(n);
for(let k=0;k<n;k++){
    
    const temp=arr[arr.length-1];
for(let i=arr.length-1;i>0;i--){
    arr[i]=arr[i-1];
    console.log(arr);
}

arr[0]=temp;
}
console.log(arr);