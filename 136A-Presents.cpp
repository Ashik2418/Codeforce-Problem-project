#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
     int n,v;
     cin>>n;
     vector<int>gifts(101);
     for(int i=1;i<=n;i++)
     {
         cin>>v;
         gifts[v]=i;
     }
     for(int i=1;i<=n;i++)
     {
         cout<<gifts[i]<<" ";
     }
    return 0;
}
