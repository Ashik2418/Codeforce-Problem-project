#include<bits/stdc++.h>
using namespace std;
# define int long long
#define opti ios_base::sync_with_stdio(false);
# define mise cin.tie(NULL);
signed main(){
opti mise
    string s, n = "";
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'v') {
            n += s[i];
        }
    }

    bool isPalindrome = true;
    for (int i = 0; i < n.size() / 2; i++) {
        if (n[i] != n[n.size() - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
