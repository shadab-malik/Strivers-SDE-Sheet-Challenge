class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int mxVal=-1;
        if(nums.size()<=2) return true;
        for(int i=0; i<nums.size()-2; i++){
            mxVal = max(mxVal,nums[i]);
            if(mxVal>nums[i+2]) return false;    
        }

        return true;
    }
};
