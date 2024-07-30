#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int find(vector<int>&parent,int x){
    return parent[x]=(parent[x]==x)?x:find(parent,parent[x]);
}
void Union(vector<int>&parent,vector<int>&rank,int a,int b ){
    a=find(parent,a);
    b=find(parent,b);
    if(rank[a]>=rank[b]){
        //!b is small so all element of grp b ko a mei dal do
        rank[a]++;
        parent[b]=a;
    }
    else{
              //*a is small so all element of grp a ko b mei dal do
        rank[b]++;
        parent[a]=b;
    }
}
void get(int x,vector<int>&parent)
{
    //return minimal,maximal and no of elements int the set 
    int m=find(parent,x);
    int maxele,minele;
    maxele=minele=m;
    int size=0;
    for(int i=0;i<parent.size();i++){
       if (find(parent, i) == m) {
            size++;
            if (i >= maxele) {
                maxele = i;
            }
            if (i <= minele) {
                minele = i;
            }
    }
}
   cout<<minele<<" "<<maxele<<" "<<size<<endl;
}

int main()
{
int n,m;
// n->no of element
//m->no of queries;
cin>>n>>m;
vector<int>parent(n+1);
vector<int>rank(n+1,0);
for(int i=0;i<=n;i++){
    parent[i]=i;
}
while(m--){
    string str;
    cin>>str;
    if(str=="union"){
        int x,y;
        cin>>x>>y;
        Union(parent,rank,x,y);
        cout<<endl;

    }
    else{
        int x;
        cin>>x;
      get(x,parent);
          
    }
}
return 0;
}