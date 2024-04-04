#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
       int n,v;
       cin>>n;
       vector<int>cubes;
       for(int i=0;i<n;i++)
       {
           cin>>v;
           cubes.push_back(v);
       }
           sort(cubes.begin(),cubes.end());


       for (int num : cubes) {
        cout << num << " ";
    }
   return 0;
}
