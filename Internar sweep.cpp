#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
       int a,b;
       cin>>a>>b;
       if(a!=0 && b!=0)
       {

      if(abs(a-b) <= 1)
      {
          cout<<"YES";
      }
      else{
        cout<<"NO";
      }
       }
       else
       {
           cout<<"NO";
       }
}
