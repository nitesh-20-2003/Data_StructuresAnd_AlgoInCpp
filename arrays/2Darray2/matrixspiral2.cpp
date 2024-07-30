#include<iostream>
using namespace std;
int main(){
    //   int m;
    
    // cout<<" enter the value of no rows of  matrix: ";
    // cin>>m;
    //  int n;
    // cout<<" enter the value of no colomuns of  matrix: ";
    // cin>>n;
    int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

int minr=0;
int maxr=2;
int minc=0;
int maxc=3;
cout<<endl;
cout<<" answer in spiral form is :"<<endl;
while((minc<=maxc)&&(maxr>=minr))
{
for(int j=minc;j<=maxc;j++)
{//right
    cout<<a[minr][j]<<" ";
    
}
minr++;
if(minr>maxr||minc>maxc)break;
for(int i=minr;i<=maxr;i++){//down
    cout<<a[i][maxc]<<" ";
    
}
 maxc--;
 if(minr>maxr||minc>maxc)break;

for(int j=maxc;j>=minc;j--){
    cout<<a[maxr][j]<<" ";//left
   
}
maxr--;
if(minr>maxr||minc>maxc)break;
for(int i=maxr;i>=minr;i--)
{//up
    cout<<a[i][minc]<<" ";
   
}
 minc++;
 if(minr>maxr||minc>maxc)break;
}
return 0;

}
