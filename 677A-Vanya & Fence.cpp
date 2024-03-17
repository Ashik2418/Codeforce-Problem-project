#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
      int n,h,p,count1=0;
      cin>>n>>h;

      for(int i=0;i<n;i++)
      {   cin>>p;
         if(p>h)
         {
             count1+=2;
         }
         else
         {
             count1++;
         }

      }
      cout<<count1;
}
