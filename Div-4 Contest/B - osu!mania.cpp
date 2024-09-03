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

        int positions[n];
        for (int i = 0; i < n; ++i) {
            string row;
            cin >> row;
            for (int j = 0; j < row.length(); ++j) {
                if (row[j] == '#') {
                    positions[i] = j + 1;
                    break;
                }
            }
        }

        for (int i = n - 1; i >= 0; --i) {
            cout << positions[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
