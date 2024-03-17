#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
    string a;
    cin>>a;
    int count=0;
    for(int i=0;i<a.size();i++)
    {
    if(a[i]== '4'||a[i]=='7')
    {
        count++;

    }
    }
   if(count==4||count==7)
   {
       cout<<"YES";
   }
   else
   {
       cout<<"NO";
   }



}
