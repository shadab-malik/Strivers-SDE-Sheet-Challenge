#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n){
   int i = nums.size()-2,l;
   while(nums[i]>nums[i+1] and i>=0) i--;
   if(i<0){
       reverse(begin(nums),end(nums)); 
       return nums;
   }
   else{
       for(l=nums.size()-1; l>i; l--){
           if(nums[l]>nums[i]) break;
       }
       swap(nums[i],nums[l]);
       reverse(nums.begin()+i+1, nums.end());
       return nums;
   }
    
}
