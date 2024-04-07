#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
         int n,count1=0;
         string a;
         cin>>n;

             cin>>a;
             for(int i=0;i<n;i++)
             {
                 a[i]=towlower(a[i]);
             }
             sort(a.begin(),a.end());

             for(int i=0;i<n;i++)
             {
                 if(a[i]!=a[i+1])
                 {
                     count1++;
                 }
             }
             if(count1 == 26)
             {
                 cout<<"YES";
             }
             else
             {
                 cout<<"NO";
             }
             return 0;
}

