#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         int n;
         int m,sum=0;
         cin>>n;
         int exact_n = n;
         while(n--)
         {
             cin>>m;
             sum+=m;

         }
        double c = (sum * 1.0) / exact_n;
        cout.precision(2);
        cout<<fixed<<c<<endl;

}
