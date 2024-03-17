#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
     string a;
     cin>>a;
     int zero=0,one=0;
     for(int i=0;i<a.size();i++)
     {
     if(a[i]=='1')
     {
         one++;
         zero=0;
     }
     else
     {
         zero++;
         one=0;
     }
     if(zero==7||one==7)
     {
         cout<<"YES";
         return 0;
     }

     }
     cout<<"NO"<<endl;

}
