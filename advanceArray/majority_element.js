let nums = [3,2,3];
let count=1; let element=nums[0];
for(let i=1; i<nums.length; i++){
        if(count==0)element=nums[i];

    if(nums[i]==element){
      count++;
    }else{
        count--;
    }
}
console.log(element);
