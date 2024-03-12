#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
          string a;
          int count=0;
          cin>>a;
          sort(a.begin(),a.end());
          for(int i=0;i<a.size();i++)
          {
              if(a[i]!=a[i+1])
              {
                  count++;
              }
          }
          if(count%2==0)
          {
              cout<<"CHAT WITH HER!";
          }
          else
          {
              cout<<"IGNORE HIM!";
          }

}
