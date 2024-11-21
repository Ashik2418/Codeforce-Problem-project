#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int health1, attack1, cooldown1, health2, attack2, cooldown2;
    
    cin >> health1 >> attack1 >> cooldown1;
    cin >> health2 >> attack2 >> cooldown2;
 
    int currentTime = 0, specialCooldown1 = 0, specialCooldown2 = 0;
    
    while (health1 > 0 && health2 > 0) {
        currentTime++;
        
        health1 -= attack2;
        health2 -= attack1;
 
        if (currentTime >= specialCooldown1) {
            health2 -= attack1;
            specialCooldown1 = currentTime + cooldown1;
        }
        if (currentTime >= specialCooldown2) {
            health1 -= attack2;
            specialCooldown2 = currentTime + cooldown2;
        }
    }
 
    if (health1 <= 0 && health2 <= 0) {
        cout << "DRAW" << endl;
    } else if (health1 <= 0) {
        cout << "JAKE PAUL" << endl;
    } else {
        cout << "MIKE TYSON" << endl;
    }
 
    return 0;
}
