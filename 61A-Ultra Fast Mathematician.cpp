#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
     string a,b;
     int count1=0,count2=0;
     cin>>a>>b;
     for(int i=0;i<a.size();i++)
     {
        if(a[i]==b[i])
        {
            cout<<"0";
        }
        else
        {
            cout<<"1";
        }
     }
     return 0;


     }


