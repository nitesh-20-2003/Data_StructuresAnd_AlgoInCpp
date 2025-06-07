/*
question link:
https://atcoder.jp/contests/abc400/tasks/abc400_d
*/
#pragma GCC optimize(3,"Ofast","inline","unroll-loops")
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1000010;
int a[N],f[N];
char s[2010][2010];
int dis[2010][2010];
signed main() {
    cin.tie(0)->sync_with_stdio(false);
    int n,m;cin>>n>>m;
    for(int i=0;i<n;++i)cin>>s[i];
    int a,b,c,d;cin>>a>>b>>c>>d;
    --a,--b,--c,--d;
    deque<pair<int,int>>q;
    memset(dis,0x3f,sizeof dis);
    q.emplace_back(a,b);
    dis[a][b]=0;
    const int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
    while(q.size()){
        auto [x,y]=q.front();q.pop_front();
        if(x==c&&y==d){cout<<dis[x][y]<<'\n';return 0;}
        for(int d=0;d<4;++d){
            int i=x+dx[d],j=y+dy[d];
            if(i>=0&&i<n&&j>=0&&j<m&&s[i][j]=='.'&&dis[i][j]>dis[x][y]){
                dis[i][j]=dis[x][y];
                q.emplace_front(i,j);
            }
        }
        for(int d=0;d<4;++d){
            for(int o=1;o<3;++o){
                int i=x+dx[d]*o,j=y+dy[d]*o;
                if(i>=0&&i<n&&j>=0&&j<m&&dis[i][j]>dis[x][y]+1){
                    dis[i][j]=dis[x][y]+1;
                    q.emplace_back(i,j);
                }
            }
        }
    }
    cout<<"-1\n";
    return 0;
}
