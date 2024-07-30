#include<iostream>
using namespace std;
int main(){
    bool flag=false;
int a[]={2,3,4,8,9,10,11};
int j;

    for(int i=0,j=i+1; i<7;i++,j++)
    {
        
            if(a[i]<a[j])
            {
                flag=true;
            }
            else break;
            
        }
        if(flag==true){cout<<" sorted";}
        else{ cout<<" not sorted";}
    }
