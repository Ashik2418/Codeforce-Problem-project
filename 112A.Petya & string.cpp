#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
        string a,b;
        cin>>a>>b;
        for(int i=0;i<a.size();i++)
        {
            a[i]=towlower(a[i]);
            b[i]=towlower(b[i]);
        }
        if(a==b)
        {
            cout<<"0";
        }
        else if(a<b)
        {
            cout<<"-1";
        }
        else
        {
            cout<<"1";
        }
        
        return 0;

}
