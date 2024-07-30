#include<bits/stdc++.h>
using namespace std;
class queu
{
    int arr[5];
    int m=5;
    int size=0;
    int f=0;//front
    int r=0;//rear/back
public:
  void push(int val)
  {
    if(size==m)
    {cout<<"stack is full";
    cout<<endl;
    return;
    }
    else arr[r]=val;
    r++;
    size++;
  }
  void pop()
{
    if(size==0){
        cout<<"queue is empty";
        cout<<endl;
        return ;
    }
    else f++;
size--;
}
int  si()//size
{
   return r-f; 
}
void display()
{
    for(int i=f;i<=r-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int front()
{
    return arr[f];

}
int back(){
    return arr[r-1];
}
};
int main()
{
    queu s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
s.push(50);
s.push(60);
s.display();
return 0;
}