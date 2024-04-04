#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         int n;
         cin>>n;
         for(int i=1;i<=n;i++)
         {
             if(i == 1)
             {
                 cout<<"I hate";
             }
             else if(i % 2 != 0)
             {
                 cout<<" that I hate";
             }
             else
             {
                 cout<<" that I love";
             }
         }
         cout<<" it";
         return 0;
}
