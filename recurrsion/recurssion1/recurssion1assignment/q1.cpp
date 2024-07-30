//Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
#include<iostream>
using namespace std;
int sum(int lo,int hi)
{
    int ans=0;
    if(lo==hi)
    {
        return hi;

    }
    else if(lo==hi-1)
    return (hi-1);

        if(lo%2!=0)
        
            ans=lo+sum(lo+2,hi);
        else
        ans=sum(lo+1,hi);

        return ans;
}
int main()
{
    int m,n;
    cout<<"enter the value of two numbers :";
    cin>>m>>n;
 int s=   sum(m,n);
 cout<<"sum of odd no's is : "<<s;
    
}