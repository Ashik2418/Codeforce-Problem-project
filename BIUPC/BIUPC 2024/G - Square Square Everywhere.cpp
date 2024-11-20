#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);

bool isPerfectSquare(int x) {
    for (int i = 1; i * i <= x; i++) {
        if (i * i == x) {
            return true;
        }
    }
    return false;
}

signed main(){
opti mise
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        int count = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (!isPerfectSquare(x)) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}

