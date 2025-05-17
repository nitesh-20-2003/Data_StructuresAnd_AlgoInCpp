#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>graph;
void add_edge(int src,int dest){
graph[src].push_back(dest);
graph[dest].push_back(src);
}
bool checkBipartiteDfs(int idx,vector<int>&color,int currColor){
color[idx]=currColor;
//* curr node ko same color kar diya
for(auto neighbours:graph[idx]){
    if(color[neighbours]==color[idx])return false;
    if(color[neighbours]==-1){
        int colorNeighbour=1-currColor;
        if(checkBipartiteDfs(neighbours,color,colorNeighbour)==false)return false;
    }
}
return true;

}
bool isBipartite(int Vertices){
    vector<int>color(Vertices,-1);
    //! initially no color
    for(int i=0;i<Vertices;i++){
        if(color[i]==-1){
           if (checkBipartiteDfs(i,color,1)==false)
           return false;
        }
    }

return true;
}
int main()
{
    int Vertices;
cin >> Vertices;
    graph.resize(Vertices);
    int edge;
    cin >> edge;

    while(edge > 0) {
        int src, dest;
        cin >> src >> dest;
        add_edge(src, dest); 
        edge--;
    }
cout<<isBipartite(Vertices);
return 0;
}