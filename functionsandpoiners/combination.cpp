#include<iostream>
using namespace std;
int combiantion( int a, int b)
{
 int c= a-b;
int i=1 ,fact1=1;
int fact2=1, fact3=1;

for(i=1; i<=a;i++)
{
    fact1= fact1*i; 
}

for(i=1; i<=b;i++)
{
    fact2= fact2*i; 
}
for(i=1; i<=c;i++)
{
    fact3= fact3*i; 
}
return fact1/(fact2*fact3);




}
int main(){
    int c= combiantion(5,3);
cout<<c;
}