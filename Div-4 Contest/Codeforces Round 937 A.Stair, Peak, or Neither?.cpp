#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
       int a,b,c,n;
       cin>>n;

       for(int i=0;i<n;i++)
       {
           cin>>a>>b>>c;
        if(a < b && b<c)
           {
               cout<<"STAIR"<<endl;
           }
           else if(a < b && b > c)
           {
               cout<<"PEAK"<<endl;
           }
           else
           {
               cout<<"NONE"<<endl;
           }
       }

       return 0;
}

