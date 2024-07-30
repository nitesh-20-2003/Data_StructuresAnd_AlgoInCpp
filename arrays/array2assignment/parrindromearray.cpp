#include<iostream>
#include<vector>
using namespace std;

int main(){
       vector<int>v;
       bool flag=false;
       int i;
       int n;
       cout<<"enter the size of array :";
cin>>n;
       for(int i=0;i<n;i++)
       {
              int m;
              cin>>m;
              v.push_back(m);
       }
       vector<int>q(v.size());

       int a=v.size();
       for(int i=0,j=a-1;i<a;i++,j--)
       {
              
                q[i]=v[j];    
              
              }
for(i=0;i<n;i++){
       if(v[i]==q[i])
       {
              flag=true;
           
              
       }
       else {
              
              break;
}
}
if(flag==true)
{
       cout<<" given array is pallindrome";
}
else{
        cout<<"  given array is not pallindrome";
        }

}


