#include<iostream>
using namespace std;
void hanoi(int n,char source,char helper,char destination)// a-> source ,b-> helper ,c-> destination ,n-> denotes no of disks

{
    if(n==0)
    return ;
    hanoi(n-1,source,destination, helper);//for first step for n-1 disks h is destination and d is helper
    cout<<source<<" ->"<<destination<<endl;
    hanoi(n-1, helper,source,destination);//for last step to move rods from b to c ,h is source and s is helper and d is destination
    return;

}
int main()
{
    int n=3;

hanoi(n,'a','b','c');
return 0;
}/*a ->c
a ->b
c ->b
a ->c
b ->a
b ->c
a ->c
*/