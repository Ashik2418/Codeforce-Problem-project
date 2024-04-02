#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         string s;
         cin>>s;
         int up=0,low=0;
         for(int i=0;i<s.size();i++)
         {
             if(isupper(s[i]))
             {
                 up++;
             }
             else
             {
                 low++;
             }
         }
         if(up<low)
         {
             for(int i=0;i<s.size();i++)
             {
                 s[i]=tolower(s[i]);
             }
             cout<<s;
         }
         if(up>low)
         {
             for(int i=0;i<s.size();i++)
             {
                 s[i]=toupper(s[i]);
             }
             cout<<s;
         }
         if(up==low)
         {
             for(int i=0;i<s.size();i++)
             {
                 s[i]=tolower(s[i]);
             }
             cout<<s;
         }
         return 0;
}
