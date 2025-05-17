#include<bits/stdc++.h>
using namespace std;
int f()
{
int a,b,c;
cin>>a>>b>>c;
vector<int>m;

}
int main()
{
int n;
cin>>n;
vector<int>input;
for(int i=0;i<n;i++)
{
 f();
}
return 0;
}
/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: the minimum number of conference rooms required
     */
    int minMeetingRooms(vector<Interval> &it) {
        vector<int>start;
       vector<int>endi;
      for(auto ele:it){
          start.push_back(ele.start);
          endi.push_back(ele.end);
      }
       sort(start.begin(),start.end());
       sort(endi.begin(),endi.end());
       int i,j;
       i=j=0;
       int rooms=0;
       int maxrooms= INT_MIN;
       while(i<start.size()&&j<endi.size())
       {
           if(start[i]<endi[j]){
               rooms++;
                maxrooms=max(rooms,maxrooms);
               i++;
           }
           else if(start[i]>endi[j]){
               j++;
               maxrooms=max(rooms,maxrooms);
               rooms--;
           }
           else{
               i++;
               j++;
           }
       }
       return maxrooms;
    }
};

