#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int m1,m2,m3;
int arr[]={1,2,3,5,4,6,7,8};
  m1=m2=m3=INT_MIN;
for(int i=0;i<8;i++)
{
    if(arr[i]>m1)
    {
        m2=m1;
        m1=arr[i];
        }
        if((arr[i]>m2)&&arr[i]!=m1)
        {
            m3=m2;
            m2=arr[i];
        }
        if((arr[i]>m3)&&(arr[i]!=m1)&&(arr[i]!=m2))
        {
            m3=arr[i];
        }

}
cout<<"max1: "<<m1<<"  "
<<"max2: "<<m2<<" "
<<"max3: "<<m3;
}