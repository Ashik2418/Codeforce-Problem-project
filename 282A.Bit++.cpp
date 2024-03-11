#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
           int a,x=0;
           string s;
           cin>>a;
           while(a--)
           {
               cin>>s;
               if(s[1]=='+')
               {
                   x++;
               }
               else
               {
                   x--;
               }
           }
           cout<<x;

}
