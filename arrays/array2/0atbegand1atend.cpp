#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
int n;
cout<<"enter the size of vector :";
cin>>n;
cout<<"enter the elements of vector :"<<endl;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);

}
int i=0;
int j=n-1;
while(j>i)
{
    if(v[i]==0)
    i++;
      if(i>j)
     break;
     if(v[j]==1)
     j--;
       if(i>j)
     break;
     if(v[i]==1&&v[j]==0)
     {
        int temp=v[i];
        v[i]=v[j];
      v[j]=temp; 
     }
 if(i>j)
     break;
 
    
}
for(int i=0;i<n;i++){
   cout<<v[i]<<" ";

}
return 0;

}