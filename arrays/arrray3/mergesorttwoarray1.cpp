#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){

    vector<int>v1;
     vector<int>v2;
    int n;
    int c;
     cout<<" enter the size of first array :";
     cin>>n;
    cout<<"enter the value of elements of first array : ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
        }
        cout<<" enter the size of second array :";
    cin>>c;
    cout<<"enter the value of elements of second array : ";
    for(int i=0;i<c;i++)
    {
        int a;
        cin>>a;
        v2.push_back(a);
        }
        int m=c+n;
vector<int>v3(m);
int i=0;
int j=0;
int k=0;
while(i<n&&j<c)
{
   
    if(v1[i]<v2[j]){
        v3[k]=v1[i];
        i++;
    }
     else{
        v3[k]=v2[j];
        j++; 

    }
    k++;
    if(i==n)
    { 
        while(j<m)
        {
      v3[k]=v2[j];
      j++;
      k++;
    }
    }
    if(j==c)
    {
        while(i<n)
        {
            v3[k]=v1[i];
            i++;
            k++;
            }
        }
}
cout<<"value of sorted array is:"<<endl;
for(int k=0;k<m;k++)
{
    cout<<v3[k]<<endl;
}
return 0;

}