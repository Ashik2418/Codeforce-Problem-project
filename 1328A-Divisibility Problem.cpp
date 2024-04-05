#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         int t,a,b,result;
         cin>>t;
         while(t--)
         {
             cin>>a>>b;
             if(a%b == 0)
             {
                 cout<<"0"<<endl;
             }
             else
             {
                result=(b-(a%b));
                cout<<result<<endl;
             }
         }
      return 0;
}
