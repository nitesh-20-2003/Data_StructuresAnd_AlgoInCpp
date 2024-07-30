#include<iostream>
using namespace std;
void find(int n,int *ptr1, int *ptr2){
*ptr1= n%10;
while(n>9){
    n=n/10;
    
}
*ptr2=n;
}
int main()
{
    int n=23456;
    int first ,last;
    int *ptr1= &first;
    int *ptr2= &last; 
    find(n,ptr1,ptr2);
cout<<first<< endl <<last;

}