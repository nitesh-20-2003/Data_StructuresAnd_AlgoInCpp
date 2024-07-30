#include<iostream>
// second max among all elements of aray
#include<climits>
using namespace std;
int main(){
    int arr[5]={ 1,0,13,5,2};
    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<=4;i++)
    {

if(max < arr[i])
{
     max=arr[i];
}

    }
for(int i=0;i<=4;i++)
{

    if((smax<arr[i])&&(arr[i]!=max))
        smax=arr[i];
}

cout<<smax<<"\t  "<<max;


    

}