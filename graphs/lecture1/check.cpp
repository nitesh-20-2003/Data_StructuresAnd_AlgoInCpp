#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<string>
#include<climits>
using namespace std;
int main()

{vector<vector<int>> isConnected = {
{0,1},{0,2}
};
for(int i=0;i<isConnected .size();i++){
    for(auto neigbhbours : isConnected[i]){
        cout<<neigbhbours<<" ";
    }
}
return 0;
}