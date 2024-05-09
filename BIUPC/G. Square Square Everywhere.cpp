#include<bits/stdc++.h>
#include<cmath>
using namespace std;
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
int main()
{

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int count = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            int v=static_cast<int>(sqrt(x));
            if (v * v != x) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}


