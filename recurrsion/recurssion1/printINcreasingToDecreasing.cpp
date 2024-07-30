//output: 1 2 3 4 3 2 1
#include<iostream>
#include<vector>
using namespace std;
void print(int n,int m)
{
    if(m==n) 
 {  
     cout<<m;
    return ;
    }
       cout<<m;
    print(n,m+1);
     cout<<m;
    
}
int main()
{
    int n=4;
print(n,1);
return 0;
}