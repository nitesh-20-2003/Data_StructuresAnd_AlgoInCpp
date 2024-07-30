#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    vector<int>candies(6);
    for(int i=0;i<6;i++){
        cin>>candies[i];
        
    }
    
     int extraCandies;
 cin>>extraCandies;
        int n=candies.size();
        vector<int>m(n);
         vector<bool>b(n);
        int c=extraCandies;
        for(int i=0;i<n;i++){
            m[i]=candies[i]+c;
        }
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++)
             {
                 if(m[i]>=candies[j])
                 {
                     b[i]=true;
                 }
                 else b[i]=false;
             }
            
        }
        for(int i=0;i<n;i++){
            if(i==0){
                cout<<"["<<b[i]<<", ";}
                else if(i==1&&i<=n-2){
                    cout<<" "<<b[i]<<", ";}
                    else cout<<b[i]<<" ]";
                }
            }
    

  
    
    