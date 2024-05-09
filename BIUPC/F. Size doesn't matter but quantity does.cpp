#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int f=0;
        int count1=1;
        while(count1<n)
        {
           f++;

        count1 = 1+f*(f+1)/2;
        }
        cout << f << endl;
    }

    return 0;
}
