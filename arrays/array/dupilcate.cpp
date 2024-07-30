#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,1,2,4,5,6};
    bool flag=false;
   
    int j;
    for(int i=0;i<=6;i++)
    {
        for(int j=i+1;j<=6;j++)
               
       {
        
         if(a[i]==a[j])
        {
            
         flag =true;
         break;
         }  
         else flag=false;
         }

    }
    if( flag==true)
    cout<<"yes duplicate are present";
    else
    cout<<"no";

}