#include<iostream>
#include<vector>

using namespace std;
void reverse(int i,int j,vector<int>&v1)
{
    int n,c;
    n=v1.size();
    for(int i=0,j=n-1;j>i;i++,j--)
    {
        c=v1[i];
        v1[i]=v1[j];
        v1[j]=c;
    }
  
}

int main(){
  vector<int>v1;
      int n; int m;  
      int j=-1;
     int c=0;
     int idx=-1;
     int i;
     cout<<" enter the size of first array :";
     cin>>n;
    cout<<"enter the value of elements of first array : ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v1.push_back(a);
        }
        for(int i=n-2;i>=0;i--)
        {
            if(v1[i]<v1[i+1]) 
            {
              int idx=i;
             break;
            }
             if(idx==-1)
            reverse(0,n-1,v1);
            break;
            }

              reverse(idx+1,n-1,v1);
            for(int j=idx+1;j<n-1;j++)
            {
              if ( v1[i]>v1[idx]);
                j=i;
                break;
            }
            
            c=v1[idx];
            v1[idx]=v1[j];
            v1[j] =c;
        
         cout<<"sorted array is :"<<endl;
        for(int i=0;i<v1.size();i++)
        {
            cout <<v1[i]<<" ";
        }
    return 0;
}