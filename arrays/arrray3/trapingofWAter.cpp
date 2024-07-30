#include<iostream>
#include<vector>
using namespace std;
int main(){
int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
int max1=height[0];
int arr[12],brr[12];
arr[0]=-1;
//previous greatest element array;
for(int i=1;i<12;i++)
{
    arr[i]=max1;
if(max1<height[i])max1=height[i];
}
//next greatest element array;
brr[12]=-1;
int max2=height[12];
for(int i=10;i>=0;i--)
{
brr[i]=max2;
if(height[i]>max2)max2=height[i];
}
//min array;
int crr[12];
for(int i=0;i<12;i++)
{
    crr[i]=min(arr[i],brr[i]);
}
int vol=0;
int diff;
for(int i=1;i<11;i++)
{
 if(crr[i]>height[i])
 {
    
    vol=vol+(crr[i]-height[i]);
 }
}
cout<<vol;

}
