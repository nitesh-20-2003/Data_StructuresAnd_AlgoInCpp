#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int target=213;
int pums[]={12,28,83,4,25,26,25,2,25,25,25,12};
int n=sizeof(pums)/sizeof(pums[0]);
vector<int>nums(pums,pums+n);
 sort(nums.begin(),nums.end());
  for(int ele:nums)
        {
            cout<<setw(6) <<ele<<"  ";
        }
        cout<<endl;
        for(int i=n-2;i>=0;i--)
        {
            nums[i]+=nums[i+1];
        }
        for(int ele:nums)
        {
            cout<<setw(6)<<ele<<"  ";
        }
        int lo=0;
        int hi=n-1;
        int len=0;
        while(lo<=hi)
        {
            int mid=lo+(hi-lo)/2;
            if(nums[mid]==target)
            cout <<(n-mid);
          else  if(nums[mid]>target)
            {
                len=n-mid;
                len--;
                lo=mid+1;
            }
            else  hi=mid-1;
    }
    cout<<endl;
   cout << len;
return 0;
}