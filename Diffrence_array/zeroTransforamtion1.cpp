#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) 
        {
            int n=nums.size();
            vector<int>diff(n,0);
            for(int i=0;i<queries.size();i++){
                int lo=queries[i][0];
                int hi=queries[i][1];
                diff[lo]++;
                if(hi+1<n){
                    diff[hi+1]--;
                }
            }
        vector<int>pre(n,0);
        pre[0]=diff[0];
        for(int i=1;i<diff.size();i++){
            pre[i]=diff[i]+pre[i-1];
        }
        for(int i=0;i<n;i++){
            if(pre[i]<nums[i])return false;
        }
        return true;
        }
        
    };
