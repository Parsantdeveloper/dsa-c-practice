let arr="PrAshAnt";
let cleanedArr="";
for(let i=0;i<arr.length;i++){
    if(arr.charCodeAt(i)>=65 && arr.charCodeAt(i)<=90){
        cleanedArr+=String.fromCharCode(arr.charCodeAt(i)+32);
    }else if(arr.charCodeAt(i)<=122 && arr.charCodeAt(i)>=97){
        cleanedArr+=String.fromCharCode(arr.charCodeAt(i)-32);
    }
}
console.log(cleanedArr);