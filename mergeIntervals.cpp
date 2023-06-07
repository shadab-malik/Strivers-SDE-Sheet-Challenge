class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        vector<vector<int>> ans;
        sort(begin(in),end(in));
        ans.push_back(in[0]);
        for(int i=1; i<in.size(); i++){
            int val = ans.back()[1];
            if(val>=in[i][0]){
                if(val>in[i][1]) continue;
                else{
                    ans.back()[1] = in[i][1];
                }
            }else{
                ans.push_back(in[i]);
            }
        }
        return ans;
    }
};
