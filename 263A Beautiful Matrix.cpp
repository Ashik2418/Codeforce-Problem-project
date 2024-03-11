#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
        int a=0;
        for(int i=1;i<=5;i++)
        {
            for(int j=1;j<=5;j++)
            {
                cin>>a;
                if(a == 1)
                {
                    cout<< abs(i-3) + abs(j-3)<<endl;
                }
            }
        }
       return 0;
}

