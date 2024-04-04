#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
          string n;
          cin>>n;
          for(int i=0;i<n.size();i++)
          {
          if(n[i] == 'H' || n[i] == 'Q' || n[i] == '9')
              {
                  cout<<"YES";
                  return 0;
              }

          }
                  cout<<"NO";


          return 0;
}
