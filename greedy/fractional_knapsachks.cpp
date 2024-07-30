#include<bits/stdc++.h>
using namespace std;
#include<vector>
bool comp(pair<int,int>&p1,pair<int,int>&p2)
{
    double r1=(p1.first*1.0)/(p1.second *1.0);
    double r2=(p2.first*1.0)/(p2.second *1.0);
    return r1>r2;

}
double fractional_knapsack(vector<int>&profit,vector<int>&weight,int n,int w)
{
    
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++)
    {
       arr.push_back({profit[i],weight[i]});

    }
    sort(arr.begin(),arr.end(),comp);
    // for(int i=0;i<n;i++)
    // {
    //   pair<int,int>p=arr[i];
    //   cout<<p.first<<" "<<p.second;
    //   cout<<endl;
    // }
    double result=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i].second<=w)
        {
            result+=arr[i].first;
        w-=arr[i].second;
        }
        else 
        {
            result+=((arr[i].first*1.0)/(arr[i].second*1.0))*w;
            w=0;
            break;
        }

    }
    return result;
}
int main()
{
   int n=3;
   int w=50;
   vector<int>profit(n);
   cout<<"enter the value of profit of items :"<<endl;
   for(int i=0;i<n;i++)
   cin>>profit[i];
   vector<int>weight(n);
   cout<<endl;
   cout<<"enter the value of weight of items :"<<endl;
   for(int i=0;i<n;i++)
   cin>>weight[i];
   cout<<endl;
cout<<"maximized profit is ^_^ ->"<<fractional_knapsack(profit,weight,n,w);
cout<<endl;


return 0;
}