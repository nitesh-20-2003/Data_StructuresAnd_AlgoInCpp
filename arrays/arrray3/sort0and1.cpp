#include<iostream>//using two for loops;
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    int noz=0;
    int noo=0;
    cout<<" enter the size of array :";
    cin>>n;
    cout<<"enter the value of elements of array : ";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        }
    for(int i=0;i<n;i++)
    {
        if(v[i]==0){
        noz++;}
    else 
    noo++;

    }
    for(int i=0;i<n;i++ )
    {
     if(i<noz)
     {
     v[i]=0;
     }
     else{
      v[i]=1;
      }
    }
    cout<<"  value of sorted array is :"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}