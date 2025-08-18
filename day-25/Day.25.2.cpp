#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int k1; cin >> k1;
    queue<int> p1;
    for (int i = 0; i < k1; i++) {
        int x; cin >> x;
        p1.push(x);
    }

    int k2; cin >> k2;
    queue<int> p2;
    for (int i = 0; i < k2; i++) {
        int x; cin >> x;
        p2.push(x);
    }

    set<pair<vector<int>, vector<int>>> seen;
    int rounds = 0;

    while (!p1.empty() && !p2.empty()) {
        // Save current state
        vector<int> v1, v2;
        queue<int> temp1 = p1, temp2 = p2;
        while (!temp1.empty()) { v1.push_back(temp1.front()); temp1.pop(); }
        while (!temp2.empty()) { v2.push_back(temp2.front()); temp2.pop(); }

        if (seen.count({v1, v2})) {
            cout << -1 << endl;
            return 0;
        }
        seen.insert({v1, v2});

        int c1 = p1.front(); p1.pop();
        int c2 = p2.front(); p2.pop();

        if (c1 > c2) {
            p1.push(c2);
            p1.push(c1);
        } else {
            p2.push(c1);
            p2.push(c2);
        }
        rounds++;
    }

    if (p1.empty())
        cout << rounds << " " << 2 << endl;
    else
        cout << rounds << " " << 1 << endl;

    return 0;
}
