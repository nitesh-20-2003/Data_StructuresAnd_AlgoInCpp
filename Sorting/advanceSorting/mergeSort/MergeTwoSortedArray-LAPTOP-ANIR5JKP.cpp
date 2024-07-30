#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&c)
{
   int i=0;
   int j=0;
   int k=0;
    while(i<a.size()&&j<b.size())
    {
    
        if(a[i]>b[j])
        c[k++]=b[j++];
      else
        c[k++]=a[i++];
        
    }
       if(i==a.size())
        {
            while (j<b.size())
            {
                c[k++]=b[j++];
            }
            
        }
         if(j==b.size())
        {
            while (i<a.size())
            {
                c[k++]=a[i++];
            }
            
        }

}
void helper(vector<int>&c)
{
    
    int n=c.size();
    if(n==1)
    return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++)
   { 
    a[i]=c[i];
   }
    for(int j=0;j<n2;j++)
    {
        b[j]=c[j+n1];
    }
    helper(a);
    helper(b);
    merge(a,b,c);
    a.clear();
    b.clear();

}
int main()
{
int arr[]={5,4,3,2,1};
int n1=sizeof(arr)/sizeof(arr[0]);
vector<int>c(arr,arr+n1);
for(int i=0;i<c.size();i++)cout<<c[i]<<" ";
cout<<endl;
helper(c);

for(int i=0;i<c.size();i++)cout<<c[i]<<" ";
return 0;
}