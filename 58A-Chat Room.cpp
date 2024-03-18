#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
    string s;
    cin>>s;
    string w="hello";
    int j=0;
    for(int i=0;i<s.size();i++)
    {
        if(w[j]== s[i])
        {
            j++;
            if(j==5)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}
