#include<bits/stdc++.h>
using namespace std;
int f()
{
int a,b,c;
cin>>a>>b>>c;
vector<int>m;

}
int main()
{
int n;
cin>>n;
vector<int>input;
for(int i=0;i<n;i++)
{
 f();
}
return 0;
}
struct cmp {
    bool operator()(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1]; 
    }
};
class Solution {
public:

    int findMinArrowShots(vector<vector<int>>& points)
     {
        sort(points.begin(),points.end(),cmp());
        vector<vector<int>>inter;// array of pts without intersection
        inter.push_back(points[0]);
        for(int i=0;i<points.size();i++){
            auto last=inter.back();
            auto curr=points[i];
            if(last[1]>=curr[0])
            {
                last[1]=max(last[1],curr[0]);
            }
            else inter.push_back(curr);
        }
        return inter.size();
    }
};