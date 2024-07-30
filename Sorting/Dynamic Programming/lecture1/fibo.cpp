 #include<iostream>
   #include<vector>
using namespace std;
int fib(int n,vector<int>&arr)
{
    if(n==0||n==1)return n;
    if(arr[n]==-1)
    { 
        int ans=fib(n-1,arr)+fib(n-2,arr);
        arr[n]=ans;
        return ans;
    }
    else return arr[n];
}
int main()
{
int n=6;
vector<int>arr(n+1,-1);

cout<<fib(n,arr)<<endl;
return 0;
}