#include<iostream>
using namespace std;
int main(){
    //   int m;
    
    // cout<<" enter the value of no rows of  matrix: ";
    // cin>>m;
    //  int n;
    // cout<<" enter the value of no colomuns of  matrix: ";
    // cin>>n;
    int a[3][3];

cout<<" enter the elements of  array:"<<endl;
for(int i=0;i<3;i++)
{
    for(int j=0;i<3;j++)
    {
        cin>>a[i][j];
    }
}
int minr=0;
int maxr=2;
int minc=0;
int maxc=2;
cout<<" answer in spiral form is :"<<endl;
while((minc<=maxc)&&(maxr>=minr))
{
for(int j=minc;j<=maxc;j++)
{//right
    cout<<a[minr][j]<<" ";
    
}
minr++;
for(int i=minr;i<=maxr;i++){//down
    cout<<a[i][maxc]<<" ";
    
}
 maxc--;
for(int j=maxc;j>=minc;j--){
    cout<<a[maxr][j]<<" ";//left
   
}
maxr--;
for(int i=maxr;i>=minr;i--)
{//up
    cout<<a[i][minc]<<" ";
   
}
 minc++;
}
return 0;

}
