#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int c1=n/3;
            int c2=n/3;
            if(n%3==1){
                c1++;
            }
            else if(n%3==2)
            {
                c2++;
            }
            cout<<c1<<" "<<c2<<endl;
        }

        return 0;
}
