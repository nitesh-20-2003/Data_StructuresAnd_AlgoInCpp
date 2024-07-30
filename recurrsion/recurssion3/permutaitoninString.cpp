#include<iostream>
#include<string>
using namespace std;
void permutation(string org ,string ans)
{
    if(org=="")
    {
        cout<<ans<<endl;
    }
    for(int i=0;i<org.size();i++)
    {
            string left=org.substr(0,i);
            string right=org.substr(i+1);
            permutation(left+right,ans+org[i]);
    }

}

int main()
{ 
    string org="ab";


permutation(org,"");

return 0;
}