# include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;
void merge(vector<int>&a,vector<int>&b,vector<int>&c,int &max,int &min)
{
   int i=0;
   int j=0;
   int k=0;
    while(i<a.size()&&j<b.size())
    {
    
        if(a[i]>b[j])
        c[k++]=b[j++];
      else
        c[k++]=a[i++];
        
    }
       if(i==a.size())
        {
            while (j<b.size())
            {
                c[k++]=b[j++];
            }
            
        }
         if(j==b.size())
        {
            while (i<a.size())
            {
                c[k++]=a[i++];
            }
            
        }
    max=c[c.size()-1];
    min=c[0];


}
void helper(vector<int>&c,int &max,int &min)
{
    
    int n=c.size();
    if(n==1)
    return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++)
   { 
    a[i]=c[i];
   }
    for(int j=0;j<n2;j++)
    {
        b[j]=c[j+n1];
    }
    helper(a,max,min);
    helper(b,max,min);
    merge(a,b,c,max,min);
    a.clear();
    b.clear();

}
int main() {
    int max = INT_MIN;
    int min = INT_MAX;

    ofstream maxi("mm.csv",ios::app);

    if (!maxi.is_open()) {
        cerr << "Failed to open file." << endl;
        return 1;
    }

    for (int i = 1; i < 100; i++) {
        const int n = i * 1000;
        vector<int> arr(n);
        srand(time(0));

        for (int j = 0; j < n; j++) {
            arr[j] = rand() % (n * 20);
        }

        int numSearches = 3000;
        vector<int> c(arr); // Copy arr to c

          clock_t start_time = clock();

        for (int j = 0; j < numSearches; j++) {
            helper(c, max, min);
        }

 clock_t end_time = clock();
         double duration = double(end_time - start_time)*(1000)/double(CLOCKS_PER_SEC);

        maxi<<n <<"," << duration / numSearches << endl;
    }

    maxi.close();
    return 0;
}