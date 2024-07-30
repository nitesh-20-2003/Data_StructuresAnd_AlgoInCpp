/*
Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
maximum number of 1’s.
Input matrix : 0 1 1 1
0 0 1 1
1 1 1 1 // this row has maximum 1s
0 0 0 0
Output: 2
*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter the size of no of rows and colums ";
    cin>>m>>n;
  
cout<<"enter the elements of array :"<<endl;
    vector<vector<int>>v;
    int idx=-1;
    int max=INT_MIN;
   for(int i=1;i<=m;i++)
   {
     vector<int>v1;
     for(int j=0;j<n;j++)
     {
        int x;
        cin>>x;
      v1.push_back(x);
     }
     v.push_back(v1);
   }
   //checking of elements
  for(int i=0;i<m;i++)
  {
    int lo=0;
    int hi=n;
       int firstidx=-1;
           int ans=-1;
        
        while(lo<=hi)


    {    
        int mid=(lo+hi)/2;

        if(v[i][mid]==1)
        {
            if(v[i][mid-1]==1)
            hi=mid-1;
            else{
                firstidx=mid;
                break;
            }

        }
        if(v[i][mid]==0)
        lo=mid+1;
    }
        if(firstidx==-1)
        {
            ans=0;

        }
        else 
        {
            ans=n-firstidx;
        }
        if(ans>max)
        {
            max=ans;
            idx=i;
        }
  }
  cout<<idx+1<<" is the required row with max 1`s";
}