class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& it) {
        vector<vector<int>> ans;
        int n = it.size();
        sort(it.begin(), it.end());
        ans.push_back(it[0]);
        for (int i = 1; i < n; i++) 
        {
            auto &last=ans.back();
            auto curr=it[i];
            if(curr[0]<=last[1]){
                last[1]=max(curr[1],last[1]);
            }
            else ans.push_back(curr);
        }
        return ans;
    }
};