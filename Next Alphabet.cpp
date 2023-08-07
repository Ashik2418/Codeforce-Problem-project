#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
     char a;
     cin>>a;
     if(a >= 'a' && a <= 'z' )
     {
         char next = a+1;
         if(next > 'z')
            next='a';
     cout<<next<<endl;
     }
     else
     {
         cout<<"Not Valid";
     }
}
