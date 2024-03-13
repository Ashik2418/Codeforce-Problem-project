#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         int n;
         int count=0;
         cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<n;i++)
       {
           if(s[i]==s[i+1])
           {
               count++;
           }
       }
       cout<<count<<endl;
       return 0;
}
