    #include<iostream>
    #include<vector>
    #include<math.h>
    using namespace std;

     int sq(int a[][2],int idx)
        {
            int x=a[idx][0];
            int y=a[idx][1];
            int ans=((x*x)+(y*y));
            return sqrt(ans);
        }
        int partition(int a[][2],int si ,int ei)
        { 
            int count=0;
             int idx=si;
            int pivotele=sq(a,idx);
           for(int i=si;i<=ei;i++)
           {
               if(i==si) continue;
               int ele=sq(a,i);
               if(pivotele>ele)count++;
           }
           int pivotidx=count+si;
           swap(a[pivotidx],a[idx]);
           int i=si;
           int j=ei;
           while(i<pivotidx&&j>pivotidx)
           {
              if(sq(a,i)<=sq(a,pivotidx))i++; 
               if(sq(a,j)>sq(a,pivotidx))j--;
               if(sq(a,i)>sq(a,pivotidx)&&sq(a,j)<=sq(a,pivotidx))
               {
                   swap(a[i],a[j]);
                   j--;
                   i++;
               }
           }
           return pivotidx;
           
           }
           
        void quicksort(int a[][2],int k,int si ,int ei,vector<vector<int>>&ans)
        {  
            if(ans.size()==k)return;
          int  pi=partition(a,si,ei);
          if(pi+1<=k)
          {
            vector<int>v;
            v.push_back(a[pi][0]);
             v.push_back(a[pi][1]);
              ans.push_back(v);
              v.clear();
              quicksort(a,k,pi+1,ei,ans);
          }
           
            else
             quicksort(a,k,si,pi-1,ans);
        }
        int main(){
  
    {
        int k=2;
        int arr[][2]={3,3,5,-1,-2,4};
        int n=sizeof(arr)/sizeof(arr[0]);
        vector<vector<int>>ans;
        quicksort(arr,k,0,n-1,ans);

        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<2;j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    }