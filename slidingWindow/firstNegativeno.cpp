#include<iostream>
#include<vector>
using namespace std;
int main()
{
int arr[]={2,-3,4,4,-7,-1,4,-2,6};
int k=4;
int n=sizeof(arr)/sizeof(arr[0]);
int previdx=-1;
vector<int>ans;
for(int i=0;i<k;i++)
{
    if(arr[i]<0)
   {
    previdx=i;
    break;
   }
}
if(previdx==-1)ans.push_back(1);//i.e. in first window no negative no. exist
else ans.push_back(arr[previdx]);
int i=1;
int j=k;
while(j<n)
{
    if(previdx>=i)
    {
        ans.push_back(arr[previdx]);
    }
    
    else 
    {
        for(int m=i;m<=j;m++)
        {
            if(arr[m]<0)
            {
                previdx=m;
                break;
            }

        }
            if(previdx==-1) ans.push_back(1);

             else  ans.push_back(arr[previdx]);
    }
    i++;
    j++;

}
for(int ele:ans)
{
    cout<<ele<<" ";
}
return 0;
}