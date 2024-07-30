#include<iostream>
using namespace std;
int power(int num,int pow)
{
    int ans;
    if(pow==1)
    return num;
    if(pow%2==0)
    {
        ans=power(num,pow/2)*power(num,pow/2);
    }
    else
      ans=power(num,pow/2)*power(num,pow/2)*num;
      return ans;

}
int main()
{
    cout<<power(3,3);
return 0;
}