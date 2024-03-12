#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
        string a;
        cin>>a;

        for(int i=0;i<a.size();i+=2)
        {
            int min_index=i;
            for(int j=i+2;j<a.size();j+=2)
            {
                if(a[min_index]>a[j])
                {
                    min_index=j;
                }
            }
            if(min_index != i)
            {
                swap (a[i],a[min_index]);
            }
        }
        cout<<a;

}
