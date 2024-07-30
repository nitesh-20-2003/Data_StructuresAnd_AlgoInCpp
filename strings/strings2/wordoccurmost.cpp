#include<iostream>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s="raghav is a maths  as teacher.he is a dsa mentor as well";
    stringstream ss(s);

  vector <string>v;
  string temp;
  while(ss>>temp)
{ 
    v.push_back(temp);
}
//  int max=0;
//  for(int i=0;i<v.size();i++){
//     int count=1;
//     for(int j=i+1;j<v.size();j++){
//         if(v[i]==v[j])
//         count++;

//     }
//     if(count>max)
//     max=count;
//  }
//   for(int i=0;i<v.size();i++){
//     int count=1;
//     for(int j=i+1;j<v.size();j++){
//         if(v[i]==v[j])
//         count++;

//     }
//     if(count==max)
//     cout<<v[i]<<" "<<max<<endl;
//  }

// to decrease time complexity we will use following method
sort(v.begin(),v.end());
int count=0;
int max=0;
int n=v.size();
   
   for(int i=0;i<n;i++)
    { 
        int count=1;
       if(i==0)
       {
        if(v[i]==v[i+1])
        count++;
   
       }
       else if(i==n)
       {
         if(v[i]==v[i-1])
         count++;
         break;
       }
     else if(v[i]==v[i+1])
        count++;
    
     if(max<count)
     max=count;
        }
           for(int i=0;i<n;i++)
    { 
        int count=1;
       if(i==0)
       {
        if(v[i]==v[i+1])
        count++;
       
       }
       else if(i==n)
       {
         if(v[i]==v[i-1])
         count++;
         break;
       }
     else if(v[i]==v[i+1])
        count++;
    
     if(max==count)
   cout<<v[i]<<"  "<<max<<endl;
        }


}