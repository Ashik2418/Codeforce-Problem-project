#include <bits/stdc++.h>
using namespace std;
#define int long long
#include <string>
 
string find_vertical_word(string grid[8]) {
    string word = "";
    for (int col = 0; col < 8; col++) {
        for (int row = 0; row < 8; row++) {
            if (grid[row][col] != '.') {
                word += grid[row][col];
            }
        }
    }
    return word;
}
 
signed main() {
    int t;
    cin >> t;
 
 
    string output = "";
 
    for (int i = 0; i < t; i++) {
        string grid[8];
        for (int j = 0; j < 8; j++) {
            cin >> grid[j];
        }
 
 
        string result = find_vertical_word(grid);
        output += result + "\n";
    }
 
    cout << output;
 
    return 0;
}
