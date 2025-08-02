let height = [4,2,0,3,2,5]
let left=[...height];
let right=[...height];
let sum = 0;
for(let i=1;i<height.length;i++){
    if(height[i]>left[i-1]){
      left[i]=height[i]; 
    }else{
        left[i]=left[i-1];
    }
}
for(let i=height.length-2;i>=0;i--){
    if(height[i]>right[i+1]){
      right[i]=height[i]; 
    }else{
        right[i]=right[i+1];
    }
}
for(let i=0;i<height.length;i++){
  sum+=Math.min(left[i],right[i])-height[i];
}
console.log(sum);