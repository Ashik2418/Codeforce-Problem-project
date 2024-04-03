#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
       double n,k,sum=0,result;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           cin>>k;
           sum+=k;
       }
        result=(sum*100)/(n*100);
       cout<<result;
       return 0;
}
