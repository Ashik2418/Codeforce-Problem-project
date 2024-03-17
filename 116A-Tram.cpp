#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
   int n,a,b,passenger=0,mini=0;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a>>b;
       passenger=passenger-a+b;
       if(passenger>mini)
       {
           mini=passenger;
       }
   }
   cout<<mini<<endl;

}
