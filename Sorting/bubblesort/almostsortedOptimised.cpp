#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,7,9,8};
    int flag=true;
    for(int i=0;i<5;i++)
    {
        int count=0;
for(int j=0;j<5;j++){
    if(i==j)
    continue;
    if(arr[j]>arr[i])
    count++;
}
int aidx=5-count-1;
// if(i==0){
//     if(arr[i]!=arr[aidx]&&arr[i]!=arr[aidx +1]){
//         flag=false;
//         break;
//     }
// }
//  else if(i==4){
//     if(arr[i]!=arr[aidx]&&arr[i]!=arr[aidx -1]){
//         flag=false;
//         break;
//     }
// }
//  else {
//     if(arr[i]!=arr[aidx]&&arr[i]!=arr[aidx -1]&&arr[i]!=arr[aidx+1])
//     {
//         flag=false;
//         break;
//     }
// }
//more easy way is as follows;
int m=i-aidx;
if(m<0)
m=-m;
if(m>1){//agar actual index and aidx ka diff greater than 1 hoga than break;
    flag=false ;
    break;
}

    }
    if(flag==false )
    cout<<"no they are not ";
    else
    cout<<"yes they are";
}