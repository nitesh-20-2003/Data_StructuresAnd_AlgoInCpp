#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
void substring(vector<string>&v,string s,string ans,bool flag)
{
    if(s=="")
    {
       v.push_back(ans);
       return;
    }
       char ch=s[0];
       char dh=s[1];
       if(s.length()==1)
       {
        if(flag==true)substring(v,s.substr(1),ans+ch,true);
        substring(v,s.substr(1),ans,true);
        return;//agar yeh condition hit kar jaye toh niche jao hi mat
       }
       /* we make if(flag==true)substring(v,s.substr(1),ans+ch,true);
       bcoz if upar se false aa raha hai to left call na lage
       
       */
       
      if( ch==dh)
       {
        if(flag==true) substring(v,s.substr(1),ans+ch,true);
        substring(v,s.substr(1),ans,false);//if 0th index element is eqaual to 1 than make it false  
       }
       else
     {//general case for calling
        if(flag==true)substring(v,s.substr(1),ans+ch,true);
        substring(v,s.substr(1),ans,true);
     }
/*122
12
1
22
2*/
       
}
int main( )
{
    string s="212";
    sort(s.begin(),s.end());
    vector<string>v;
    vector<int>c;
 
substring(v,s,"",true);
for(string ele: v)
{
    cout<<ele<<endl;
}

return 0;
}