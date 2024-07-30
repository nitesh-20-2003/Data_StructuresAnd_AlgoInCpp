#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int n;
  
   int c0,c1,c2;
c0=c1=c2=0;
    cout<<" enter the size of array :";
    cin>>n;
    cout<<"enter the value of elements of array : ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            if(v[i]==0)
            c0++;
             if(v[i]==1)
             c1++;
            if(v[i]==2)
            c2++;
        }
      
         for(int i=0;i<n;i++)
         {
            if(i<c0)
            v[i]=0;
          else if(i<(c0+c1))  
     
        v[i]=1;
        else v[i]=2;
         
         }
          cout<<" value of sorted array is :"<<endl;
          for(int i=0;i<n;i++)
          {
            cout<<v[i]<<" ";
          }
           return 0;
        }