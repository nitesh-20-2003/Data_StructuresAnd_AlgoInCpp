/*
You have n coins and you want to build a staircase with these coins. The staircase consists of k
rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
Given the integer n, return the number of complete rows of the staircase you will build.
Example 1:
Input: n = 5
Output: 2
Explanation: Because the 3rd row is incomplete, we return 2.
Example 2:
Input: n = 8
Output: 3
Explanation: Because the 4th row is incomplete, we return 3.
*/
#include<iostream>
using namespace std;
bool sum(int mid,int n)
{
    int s=(mid*(mid+1))/2;
        if(n>=s)
        return true;
        else 
        return false;
}
int main()
{
    int n;
    cout<<"enter the no of staircase  :";
    cin>>n;
    cout<<endl;
    int lo=0;
    int hi=n;
    int ans=-1;
    while(hi>=lo)
    {
        int mid=(lo+hi)/2;
        if(sum(mid,n))
        {  
        ans=mid;
        lo=mid+1;
        }
        else 
        hi=mid-1;
    }
    cout<<"no of succeful staircase possible is :"<<ans;
}