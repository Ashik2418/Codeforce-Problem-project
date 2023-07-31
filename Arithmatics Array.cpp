include<vector>
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
            vector<int>a(n);
            int sum=0;
 
            for(int i=0;i<n;i++)
            {
                cin>>a[i];
            sum+=a[i];
 
            }
 
            if(sum == n)
            {
                cout<< 0 <<endl;
            }
          else  if(sum < n)
            {
                cout<< 1 <<endl;
            }
            else
            {
                cout<<sum-n<<endl;
            }
        }
 
}
