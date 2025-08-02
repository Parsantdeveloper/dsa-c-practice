let s="0P";
let cleanedArr="";
for(let i=0;i<s.length;i++){
    if(s.charCodeAt(i)>=65 && s.charCodeAt(i)<=90){
      cleanedArr+=String.fromCharCode(s.charCodeAt(i)+32);
    }else if(s.charCodeAt(i)<=122 && s.charCodeAt(i)>=97){
        cleanedArr+=s[i];
    }else if(s.charCodeAt(i)>=48 && s.charCodeAt(i)<=57){
        cleanedArr+=s[i];
    }
}
let isPalindrome=true;
let i=0; j=cleanedArr.length-1;
while(i<=j){
    if(cleanedArr[i]!=cleanedArr[j]){
        isPalindrome=false;
        break;        
    }else{
        i++;
        j--;
    }
}
console.log(isPalindrome ? "true" : "false");