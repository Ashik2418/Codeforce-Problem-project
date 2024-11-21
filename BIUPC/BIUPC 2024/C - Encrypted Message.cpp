#include<bits/stdc++.h>
using namespace std;
#define int long long
#define opti ios_base::sync_with_stdio(false);
#define mise cin.tie(NULL);
 
string encodeMessage(const string& originalMessage) {
    string transformedMessage = "";
    for (char currentCharacter : originalMessage) {
        int shiftValue;
        if (currentCharacter == 'a' || currentCharacter == 'e' || currentCharacter == 'i' || 
            currentCharacter == 'o' || currentCharacter == 'u') {
            shiftValue = 1;
        } else {
            shiftValue = 2;
        }
        char shiftedCharacter = (currentCharacter - 'a' + shiftValue) % 26 + 'a';
        transformedMessage += shiftedCharacter;
    }
    return transformedMessage;
}
 
signed main() {
    opti mise
    string secretMessage;
    cin >> secretMessage;
    cout << encodeMessage(secretMessage);
    return 0;
}
