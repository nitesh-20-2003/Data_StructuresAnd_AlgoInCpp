#include<bits/stdc++.h>
using namespace std;
//for the max heap
class pq
{
    vector<int>ans;
    int i;//[0,i]->maxheapify hai 0 se lekar i tak
    public:
     
    void upheapify(int ci){//ci->child index
        while(ci>0)
        {
            int pi=(ci-1)/2;
            if(ans[ci]>ans[pi])
            {swap(ans[ci],ans[pi]);
            ci=pi;
            }
            else break;
        }
     
    }
    bool empty()
    {
        if(ans.size()==0)return true;
        else return false;
    }
        void downheapify(int idx){
                while(idx<ans.size())
                {
                    int lc=2*idx+1;
                    int rc=2*idx+2;
                    if(lc>=ans.size())break;
                    int maxlele=idx;
                    if(ans[lc]>ans[maxlele]){
                        maxlele=lc;
                    }
                    if(rc<ans.size()and ans[rc]>ans[maxlele]){
                        maxlele=rc;
                    }
                    if(maxlele!=idx)
                   { swap(ans[idx],ans[maxlele]);
                   idx=maxlele;//this is for next iteration
                   }
                   else break;

                }
        }
        void pop()
        {
            //removes the highest priortiy element
            if(empty())return;
            swap(ans[0],ans[ans.size()-1]);
            ans.pop_back();
            if(!empty())
            {
                downheapify(0);

            }
        }
    void add(int val)
    {
        ans.push_back(val);
        upheapify(ans.size()-1);
    }
    void display()
    {
       { for(int i=0;i<ans.size()-1;i++)
        cout<<ans[i]<<" ";}
        cout<<endl;
        
    }
    int peek()
    {
        return ans[0];

    }
     pq(vector<int> v)
       {

        for(int i=1;i<v.size();i++){
            upheapify(i);
        }
        }
  
}; 
int main()
{
vector<int>v={9,6,1,19,3,2,8,12,5};
pq p(v);
p.display();
return 0;
}