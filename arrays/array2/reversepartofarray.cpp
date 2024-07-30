# include<iostream>
#include<vector>
#include<climits>
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
    cout<<"reversed array is :"<<endl;
    display(v);
}
int main(){
     vector<int>v;
     int n,c;
     cout<< "enter the size of array :";
     cin>>n;
     cout<<endl;
     for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
             }
             cout<<endl;
             cout<<" entere the value of indexes upto which you want to reverse the array: ";
             int i,j;
             cin>>i;
             cin>>j;
             reverse(i,j,v);
    
    }
