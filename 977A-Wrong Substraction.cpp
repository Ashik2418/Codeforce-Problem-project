#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
   int a,n;
   cin>>a>>n;
   for(int i=0;i<n;i++)
   {
       if(a%10==0)
       {
           a/=10;
       }
       else
       {
           a--;
       }
   }
   cout<<a<<endl;

}
