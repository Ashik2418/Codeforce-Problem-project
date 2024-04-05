#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         int n,vx,vy,p,q;
         cin>>n>>p;
         set<int>levels;
         for(int i=0;i<p;i++)
         {
             cin>>vx;
             levels.insert(vx);

         }
         cin>>q;
         while(q--)
         {
             cin>>vy;
             levels.insert(vy);

         }
         if(levels.size() == n)
         {
             cout<<"I become the guy.";
         }
         else
         {
             cout<<"Oh, my keyboard!";
         }
}
