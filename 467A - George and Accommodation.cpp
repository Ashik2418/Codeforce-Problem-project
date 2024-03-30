#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
     int n,p,q,c=0;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>p>>q;
         if(q-p >= 2)
         {
             c++;
         }
     }
     cout<<c<<endl;
     return 0;

}
