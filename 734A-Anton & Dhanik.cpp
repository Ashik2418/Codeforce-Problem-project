#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         int n;
         cin>>n;
         string s;
         cin>>s;
         int Anton=0,Dhanik=0;
         for(int i=0;i<n;i++)
         {
             if(s[i]=='A')
             {
                 Anton++;
             }
             else if(s[i]=='D')
             {
                 Dhanik++;
             }

         }
         if(Anton>Dhanik)
         {
             cout<<"Anton";
         }
         else if(Anton<Dhanik)
         {
             cout<<"Danik";
         }
         else if(Anton==Dhanik)
         {
             cout<<"Friendship";
         }
         }

