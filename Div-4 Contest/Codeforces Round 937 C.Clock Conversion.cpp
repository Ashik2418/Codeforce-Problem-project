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
        string time;
        cin >> time;
 
        int hour = stoi(time.substr(0, 2));
        int minute = stoi(time.substr(3, 2));
 
        string period;
 
        if (hour >= 12) {
            period = "PM";
            if (hour > 12)
                hour -= 12;
        } else {
            period = "AM";
            if (hour == 0)
                hour = 12;
        }
 
        cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute << " " << period << endl;
 
    }
 
    return 0;
}
