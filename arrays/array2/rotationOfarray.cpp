#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a)
{
      for(int i=0;i<a.size();i++)
      {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void reverse(int a,int b, vector<int>&v)
{

    int c;
    for(int i=a,j=b;j>=i;i++,j--)
    {
      c=v[i];
      v[i]=v[j];
      v[j]=c;
    }
    cout<<endl;
    
}
int main(){
     vector<int>v;
     int n,c;
     cout<< "enter the size of array :";
     cin>>n;//size
     cout<<endl;
     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
             }
             cout<<endl;
    cout<<" enter no of passes: ";
        int a;
        cin>>a;
        if(a>n)a=a%n;
        reverse(0,n-a-1,v);
        reverse(n-a,n-1,v);
reverse(0,n-1,v);
display(v);
// but if k>n error came;

}