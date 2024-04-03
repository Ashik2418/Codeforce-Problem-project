#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
      int a,b,c,d;
      
      cin>>a>>b>>c>>d;
      
      set<int>s={a,b,c,d};
      
      cout<<4-s.size()<<endl;
      
      return 0;
}
