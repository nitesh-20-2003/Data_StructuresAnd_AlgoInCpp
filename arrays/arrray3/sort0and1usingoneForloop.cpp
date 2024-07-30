#include<iostream>//using one for loops;
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    int c;
   

    cout<<" enter the size of array :";
    cin>>n;
    cout<<"enter the value of elements of array : ";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        }
            int i=0;
            int j=n-1;
   
        while(i<j)
        {
    if(v[i]==0)
            {
            i++;
            }
            if(v[j]==1)
            {
            j--;
            }
            if(i>j)break;
            if(v[i]==1&&v[j]==0)
            {
                c=v[i];
                v[i]=v[j];
                v[j]=c;
                  i++;
                 j--;
            }
           
        }
        cout<<" value of sorted array is :"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        return 0;
        }