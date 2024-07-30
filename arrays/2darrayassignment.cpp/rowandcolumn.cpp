#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the size of rows :"<<endl;
    cin>>n;
     cout<<"enter the size of columns :"<<endl;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int t=INT_MIN;
    for(int k=0,j=n-1;k<n;k++,j--)
    {
    if(k==j)
    t=k;
    }
    cout<<" requied answer is: "<<endl;
    
  for(int i=0;i<n;i++) 
  {
    
        for(int j=0;j<m;j++)
        {
            if(j==t||i==t)
            {
                cout<<arr[i][j]<<" ";

            }
            else cout<<"  ";// jitna imp hai utna print karana hai else spaces 
            
        }
        cout<<endl;
        }
    return 0;
   

}