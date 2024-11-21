#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
        int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
        vector<int> rings(n);
        for (int i = 0; i < n; i++) {
            cin >> rings[i];
        }
 
        vector<int> towers;
 
        for (int i = 0; i < n; i++) {
            int ring = rings[i];
            auto it = lower_bound(towers.begin(), towers.end(), ring);
 
            if (it != towers.end()) {
                *it = ring;
            } else {
                towers.push_back(ring);
            }
        }
 
        cout << towers.size() << "\n";
    }
 
    return 0;
}
 
