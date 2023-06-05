class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int b=INT_MAX; int pro=0;
        for(auto a: prices){
            if(a<b) b =a;
            else pro = max(pro, a-b);
        }
        return pro;
    }
};
