#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arr[i][j];

        }
    }
    int sum1,sum2,sum3;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==0)
         sum1=sum1+arr[i][j];
             if(i==1)
         sum2=sum2+arr[i][j];
             if(i==2)
         sum3=sum3+arr[i][j];


        }
        
    }
  
   
}