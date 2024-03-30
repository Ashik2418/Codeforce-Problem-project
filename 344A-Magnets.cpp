#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
      int n,q=0;
      string first="",second = "";
      cin>>n;
     while(n--)
     {
         cin>>second;
         if(first != second)
         {
             q++;
             first=second;
         }
     }
     cout<<q<<endl;
  return 0;
}
