#include<iostream>
using namespace std;
int power(int num,int pow)
{
    if(pow==1)
    return num;
    int ans=num*power(num,pow-1);
    return ans;

}
int main()
{
    cout<<power(3,4);

}