#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool removed = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' && !removed) {
            removed = true;
            continue;  // skip this zero
        }
        cout << s[i];
    }
    // if no zero was removed, remove the last digit
    if (!removed) {
        for (int i = 0; i < s.size() - 1; i++) {
            cout << s[i];
        }
    }
    return 0;
}
