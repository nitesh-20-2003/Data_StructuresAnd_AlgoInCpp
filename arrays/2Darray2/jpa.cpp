using pp = pair<int, int>;

class Solution {
public:
    static bool cmp(const pp& a, const pp& b) {
        return a.first > b.first;
    }

    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) 
    {
        vector<pair<int,int>>m;
        int n=p.size();
        for(int i=0;i<n;i++){
            m.push_back({c[i],p[i]});
        }

        sort(m.begin(),m.end(),cmp);
        int i=0;
        
        priority_queue<int>q;
        while(k--){
            while(i<n&& m[i].first<=w){
                q.push(m[i].second);
                i++;
            }
            if(!q.empty()){
                w+=q.top();
                q.pop();
            }
        }
        return w;
    }
};