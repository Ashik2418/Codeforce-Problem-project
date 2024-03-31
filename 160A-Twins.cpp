#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
       int n,coin,sum=0,sum1=0,coincounter=0;
       cin>>n;
       vector<int > coins;
       for(int i=0;i<n;i++)
       {

           cin>>coin;
           coins.push_back(coin);
           sum+=coin;
       }
       sum=sum/2;
       sort(coins.rbegin(),coins.rend());
       for(auto v: coins)
       {
           sum1+=v;
           coincounter++;
           if(sum<sum1)
           {
               cout<<coincounter<<endl;
               break;
           }
       }
}
