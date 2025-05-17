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
void printFibonacciUpToN(int n) {
    int a = 0, b = 1;
    
    // Print Fibonacci numbers up to n
    cout << "Fibonacci numbers up to " << n << ": ";
    
    // Special cases for 0 and 1
    if (n >= 0) cout << a << " ";
    if (n >= 1) cout << b << " ";
    
    while (true) {
        int next = a + b;
        if (next > n) break;
        cout << next << " ";
        a = b;
        b = next;
    }
    
    cout << endl;
}