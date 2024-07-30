#include<iostream>
using namespace std;
int main()
{
int a,b;
int *ptr1= &a;
int*ptr2= &b;
cin>>*ptr1>>*ptr2;
cout<<(*ptr1*(*ptr2));
}