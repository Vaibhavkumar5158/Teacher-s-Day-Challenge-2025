#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;

        vector<int> v = {x, y, z};
        sort(v.begin(), v.end());  // sort ascending

        if (v[1] != v[2]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            // Construct triple: (v[0], v[1], v[2])
            cout << v[0] << " " << v[0] << " " << v[2] << "\n";
        }
    }
    return 0;
}
