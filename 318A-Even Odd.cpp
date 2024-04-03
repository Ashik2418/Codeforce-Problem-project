#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
      int n,k,partitionvalue,output;
      cin>>n>>k;
      if(n%2==0)
      {
          partitionvalue=n/2;
      }
      else
      {
          partitionvalue=n/2+1;
      }
      if(k<=partitionvalue)
      {
          output=(k*2)-1;
      }
      else
      {
          output=(k-partitionvalue)*2;
      }
      cout<<output;
      return 0;
}
