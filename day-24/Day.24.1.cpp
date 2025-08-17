#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    int len = n.size();
    int ans = (1 << len) - 2;
    int val = 0;
    for (char c : n) {
        val = val * 2 + (c == '7');  
    }

    ans += val + 1;
    cout << ans << endl;
    return 0;
}
