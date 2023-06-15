#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums){
    int ele1,ele2;
    int val1=0,val2=0;
    for(auto a: nums){
        if(a==ele1) val1++;
        else if(a==ele2) val2++;
        else if(val1==0) ele1=a,val1++;
        else if(val2==0) ele2=a,val2++;
        else val1--,val2--;
    }
    val1=0,val2=0;
    for(auto a: nums){
        if(a==ele1) val1++;
        if(a==ele2) val2++;
    }
    vector<int> ans;
    if(val1>nums.size()/3) ans.push_back(ele1);
    if(val2>nums.size()/3) ans.push_back(ele2);
    return ans;

}
