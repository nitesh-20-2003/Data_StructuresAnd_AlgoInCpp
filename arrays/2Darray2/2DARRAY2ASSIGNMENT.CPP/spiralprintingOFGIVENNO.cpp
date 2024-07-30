#include<iostream>
//Given a positive integer n, generate a n x n matrix filled with elements from 1 to (n)2 in spiral order.
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<" enter the value of number :";
    cin>>n;
    cout<<endl;
    int a[n][n];
    int m=pow(n,2);
    int x=1;
    cout<<" spiral  matrix is:"<<endl;
 
    int minc=0; 
    int maxc=n-1;
    int minr=0;
    int maxr=n-1;
    while((minc<=maxc)&&(maxr>=minr)&&x<=m)
{
for(int j=minc;(j<=maxc);j++,x++)
{//right
      a[minr][j]=x;
    
}

minr++;
if(minr>maxr||minc>maxc||x>m)break;
for(int i=minr;i<=maxr;i++,x++){//down
     a[i][maxc]=x;
    
}

 maxc--;
 if(minr>maxr||minc>maxc||x>m)break;

for(int j=maxc;j>=minc;j--,x++){
a[maxr][j]=x;
   
}
maxr--;
if(minr>maxr||minc>maxc||x>m)break;
for(int i=maxr;i>=minr;i--,x++)
{//up
    a[i][minc]=x;
   
}
 minc++;
 if(minr>maxr||minc>maxc||x>m)break;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<"  ";
    }
}
return 0;

}


 
     
    
