#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){

    vector<int>v;
    
    int j,i,n;
    cout<<"enter the value of size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
         int sum1,sum2;
    sum1=sum2=0;
    int q=v.size();
    vector<int>v1(q);
 vector<int>v2(q);

    for(int i=0;i<v.size();i++) {
        if(i%2==0){
            v1[i]=v[i];
        }
        else
        v2[i]=v[i];
    }
       
      for(int i=0;i<v.size();i++){
         sum1=sum1+v1[i];
     }
   for(int i=0;i<v.size();i++){
         sum2=sum2+v2[i];
      }
     cout<<"differences of elements at even and odd indices is : "<<abs(sum2-sum1);

    
}