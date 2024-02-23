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

        int cells[n];
        for (int i = 0; i < n; ++i) {
            cin >> cells[i];
        }

        int chip_positions[n], chip_count = 0;
        for (int i = 0; i < n; ++i) {
            if (cells[i] == 1) {
                chip_positions[chip_count++] = i;
            }
        }

        int operations = 0;
        for (int i = 1; i < chip_count; ++i) {
            operations += chip_positions[i] - chip_positions[i - 1] - 1;
        }

        cout << operations << endl;
    }

    return 0;
}

