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

        for (int i = 0; i < 2 * n; ++i) {
            for (int j = 0; j < 2 * n; ++j) {
                if ((i / 2 + j / 2) % 2 == 0)
                    cout << '#';
                else
                    cout << '.';
            }
            cout << endl;
        }
    }

    return 0;
}

