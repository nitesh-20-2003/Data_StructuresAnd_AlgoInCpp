#include<iostream>
#include<vector>
using namespace std;
int main(){

//    int rowIndex;
//     int n=rowIndex;
    
//     cout<<" enter the row index:";
//     cin>>n;
//     cout<< endl;
      
       vector <vector<int>> v;
       for(int i=1;i<=3;i++)
       {
        vector<int>a(i);
        v.push_back(a);
       }
       
       for(int i=0;i<3;i++)
       {
           for(int j=0;j<=i;j++)
           {
               if(j==0||j==i)
               v[i][j]=1;
               else
               v[i][j]= v[i-1][j]+ v[i-1][j-1];
           }
       }

       for(int  i=0;i<=3;i++)
       {
        for(int j=0;j<=i;j++)
        {
            cout<<v[i][j]<<"  ";
        }
        cout<<endl;
       }

    //    vector<int>v1(n+1);
    //    int i=n;
    //    for(int j=0;j<=i;j++)
    //    {
    //        v1[j]=v[i][j];
    //    }
    //    for(int i=0;i<(n+1);i++){
    //     cout<<v1[i]<<" ";
    //    }
       return 0;
}
