#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>&a,vector<int>&b,vector<int>&c)
{
    int i,j,k;
    i=j=k=0;
    while(i<a.size()&&j<b.size())
    {
    
        if(a[i]>b[j])
        c[k++]=b[i++];
        if(b[j]>a[i])
        c[k++]=a[i++];
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
// int arr[]={1,4,5,6,7};
// int n1=sizeof(arr)/sizeof(arr[0]);
// int brr[]={2,3,8,11,20};
// int n2=sizeof(brr)/sizeof(brr[0]);
// vector<int>a(arr,arr+n1);
// vector<int>b(brr,brr+n2);
// vector<int>c(n1+n2);  
// merge(a,b,c);
int arr[]={5,4,3,2,1};
int n1=sizeof(arr)/sizeof(arr[0]);
vector<int>c(arr,arr+n1);
helper(c);
string s="abc";
reverse(s.begin(),s.end());
cout<<s;
for(int ele:c)
{
    cout<<ele<<" ";
}
return 0;
}