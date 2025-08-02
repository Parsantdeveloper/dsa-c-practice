 
 let prices=[7,1,5,3,6,4];
 let i =0; let j=1;
 let min=prices[0];
 let ans=0;
 while(j<prices.length){
   if(prices[i]<prices[j]){
    if(prices[i]<min){
     min=prices[i];
    }
    if(prices[j]-min>ans){
    ans=prices[j]-min;   
    console.log("ans",ans)
    }
   }
   j++;
   if(j==prices.length-1){
   i=i+1;
   j=i+1;
   }
 }

console.log(ans);

console.log(ans); // Output the maximum profit