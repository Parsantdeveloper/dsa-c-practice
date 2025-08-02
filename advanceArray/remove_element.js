
  let nums= [2,2,2]
  let val=2;
   let count=0
        let i=0;j=nums.length-1;  
     while(i<=j){
     if(nums[i]==val){
      [nums[i],nums[j]]=[nums[j],nums[i]]
      j--
     }else{
      i++
     }
     }
     return j+1;;