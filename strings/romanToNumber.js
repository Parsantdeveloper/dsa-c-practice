const romanMap = {
  'I': 1,
  'V': 5,
  'X': 10,
  'L': 50,
  'C': 100,
  'D': 500,
  'M': 1000
};
let s ="LVIII";
let sum=0;
for(let i=0;i<=s.length-1;i++){
  if(romanMap[s[i]]>=romanMap[s[i+1]]){
      sum+=romanMap[s[i]];
      console.log("if chalyo ",sum)
  }else if(romanMap[s[i]]<romanMap[s[i+1]]){
      sum+=romanMap[s[i+1]]-romanMap[s[i]];
      console.log("if else chalyo ",sum)
    i++
  }else{
    console.log("kei chalena")
    sum+=romanMap[s[i]];
  }
  console.log("i",i)

}
console.log(sum)