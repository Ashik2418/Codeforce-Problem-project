#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
      int year;
      cin>>year;
      for(;;)
      {
          year++;
          int a=year/1000;
          int b=(year/100)%10;
          int c=(year/10)%10;
          int d=year % 10;

          if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d )
          {
              cout<<year<<endl;
              break;
          }

      }

}
