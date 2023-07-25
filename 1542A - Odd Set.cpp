#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
     int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         vector<int> a(2 * n);
         for(int i=0;i< 2*n;i++)
         {
             cin>>a[i];
         }
         int odd_count=0;
         int even_count=0;
         for(int i=0;i<2*n;i++)
         {
             if(a[i]%2 ==0)
             {
                 even_count++;
             }
             else
             {
                 odd_count++;
             }
         }
         if(odd_count == n)
         {
             cout<<"yes"<<endl;
         }
         else
         {
             cout<<"No"<<endl;
         }

     }
    return 0;



}
