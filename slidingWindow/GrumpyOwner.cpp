#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main()
{
int arr[]={1,0,1,2,1,1,7,5};
int gru[]={0,1,0,1,0,1,0,1};
int k=3;

int g=sizeof(gru)/sizeof(gru[0]);
int prevloss=INT_MIN;
int maxloss=INT_MIN;
int currloss=INT_MIN;
int loss=0;
int maxidx=-1;
for(int m=0;m<k;m++)
{
    if(gru[m]==1)loss+=arr[m];

}
prevloss=loss;
int i=1;
int j=k;
while(j<g)
{
  currloss=prevloss;
  if(gru[i-1]==1)currloss-=arr[i];
    if(gru[j]==1)currloss+=arr[j];
    if(currloss>maxloss)
    {
        maxloss=currloss;
        maxidx=i;
    }
    prevloss=currloss;
    i++;
    j++;
}
for(int i=maxidx;i<maxidx+k;i++)
{
    gru[i]=0;
}
int sum=0;
for(int i=0;i<g;i++)
{
    if(gru[i]==0) sum+=arr[i];
}
cout<<sum;
return 0;
}