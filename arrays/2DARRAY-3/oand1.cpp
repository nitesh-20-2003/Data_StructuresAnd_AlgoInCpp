#include<iostream>
#include<vector>
using namespace std;
int main(){
    int row,col;
    cout<<" enter no of rows and col:"<<endl;
    cin>>row>>col;
    cout<<endl;
    cout<<" enter the elements of array :"<<endl;
   int v[row][col];
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<col;j++)
    {
        cin>>v[i][j];
    }
   }
   cout<<endl;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(v[i][j]==0)
            {
           
                 for(int n=0;n<col;n++)
                 {
                   v[i][n]=0;
                 }
                 for(int m=0;m<row;m++ )
                 {
                     v[m][j]=0;
                  }
            }
            else {
                
            }
        }
    }
    cout<<"sorted array is :";
    cout<<endl;
       for(int i=0;i<row;i++){
        for(int j=0;j<col;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
        }
        return 0;

}