#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
    int n;
    cin>>n;
    vector<int> lucky_number={4,7,44,47,77,74,444,447,477,744,747,774,777};
    for(int i=0;i<lucky_number.size();i++)
    {
        if(n%lucky_number[i]==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
return 0;
}
