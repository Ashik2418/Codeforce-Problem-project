#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
      int n,t;
      cin>>n>>t;
      string sequence;
      cin>>sequence;
      for(int i=0;i<t;i++)
      {
          for(int j=0;j<sequence.size();j++)
          {
              if(sequence[j]=='B'&& sequence[j+1]=='G')
              {
                  sequence[j]='G';
                  sequence[j+1]='B';
                  j++;
              }
          }
      }
      cout<<sequence<<endl;
      return 0;
}
