let nums =[-2,1,-3,4,-1,2,1,-5,4];

let max = 0 ; let sum =-Infinity;
for(let i=0; i<nums.length; i++){
    max+=nums[i];
    if(max>sum){
      sum=max;
    }
    if(max<0)max=0
}
console.log(sum);