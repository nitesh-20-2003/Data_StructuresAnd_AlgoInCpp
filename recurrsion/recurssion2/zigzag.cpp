#include<iostream>
#include<algorithm>
using namespace std;
 void print (int n)
 {
    if(n==0)
    return ;
    cout<<n<<endl;
    print(n-1);
    cout<<n<<endl;
    print(n-1);
    cout<<n<<endl;
 }
int main()
{
    print(2);
    int arr[]={1,2,3,4,5};
    
}