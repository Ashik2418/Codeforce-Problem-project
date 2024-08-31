#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
       int n,a,b;
       cin>>n;
       while(n--)
       {
           cin>>a;
           int first=a/10;

           int second=a%10;

           int sum=first+second;

           cout<<sum<<endl;
       }

return 0;
}
