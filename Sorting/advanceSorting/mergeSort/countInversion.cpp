#include<iostream>
#include<vector>
using namespace std;

int  inversion(vector<int>&a,vector<int>&b)
{
    int i=0,j=0;
    int c=0;
    while (i<a.size()&&j<b.size())
    {
        if(a[i]>b[j])
        {
            c+=(a.size()-i);
            j++;
        }
        else
        {i++;}
    }
    cout<<c<<"  ";
    
    return c;
    
}
void merge(vector<int>&a,vector<int>&b,vector<int>&v)
{
    int i=0,j=0,k=0;
    while(i<a.size()&&j<b.size())
    {
        if(a[i]>b[j])
        v[k++]=b[j++];
        if(a[i]<b[j])
        v[k++]=a[i++];
        if(i==a.size())
        {
            while(j<b.size())
                    v[k++]=b[j++];
        }
        if(j==b.size())
        {
            while(i<a.size())
            v[k++]=a[i++];
        }
    }
}

void mergeSort(vector<int>&v,int &count)
{
    int n=v.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n1;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++)
    {
        a[i]=v[i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j]=v[j+n1];
    }
    mergeSort(a,count);
    mergeSort(b,count);
   count+= inversion(a,b);
  merge(a,b,v);
   a.clear();
   b.clear();

}
int main()
{
int arr[]={5,1,3,0,4,2,6};
int count=0;
int n=sizeof(arr)/sizeof(arr[0]);
vector<int>v(arr,arr+n);
mergeSort(v,count);
cout<<endl;
cout<<count;
cout<<endl;
cout<<"elements of array is :"<<endl;
for(int ele:v)
{
    cout<<ele<<" ";
}
return 0;
}