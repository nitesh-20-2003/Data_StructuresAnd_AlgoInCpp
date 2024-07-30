#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;

  int sum(vector<vector<int>>&mat,int row1, int col1, int row2, int col2)
 
      {  int sum=mat[row1][col2];
      cout<<sum<<endl;
        sum+=mat[row2][col2];
        cout<<sum<<endl;
        if(col1!=0)sum-=mat[row1][col1-1];
         cout<<sum<<endl;
        if(col1!=0)sum-=mat[row2][col1-1];
         cout<<sum<<endl;
        return sum;
        }
int main()
{
    int matrix[][5]={3, 0, 1, 4, 2, 5, 6, 3, 2, 1, 1, 2, 0, 1, 5, 4, 1, 0, 1, 7, 1, 0, 3, 0, 5};//output->8
    int mat[5][5];
    vector<vector<int>>ans;
        int p=matrix[0][0];
        for(int i=0;i<5;i++)
        {
            vector<int>v;
            for(int j=0;j<5;j++)
            {
                if((i==0)&&(j==0))
                {
                    v.push_back(matrix[0][0]);
                    continue;
                }
                p+=matrix[i][j];
                v.push_back(p);
            }
            ans.push_back(v);
            
        }
        for(int i=0;i< ans.size();i++)
        {
           
            for(int j=0;j< ans[0].size();j++)
            {
               cout<<setw(8)<<ans[i][j]<<" ";
            }
            cout<<endl;
           
        }
        cout<<sum(ans,2, 1, 4, 3);
   
return 0;
}