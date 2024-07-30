#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<" reversed array is";
    for(int i=0;i<n;i++)
    {
        if((i%2)!=0)
        {
            s[i]='0';
        }
    }
     for(int i=0;i<n;i++)
     {
       cout<<s[i];
    }
return 0;
}