let s="abacba";
let arr=new Array(127).fill(0);

for(let i=0;i<s.length;i++){
    arr[s.charCodeAt(i)]++;
}

for(let i=0;i<arr.length;i++){ 
  if(arr[i]>0){
    console.log(`${String.fromCharCode(i)} : ${arr[i]}`)
  }
} 