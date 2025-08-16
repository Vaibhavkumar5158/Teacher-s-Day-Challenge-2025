#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> sorted = a;
    sort(sorted.begin(), sorted.end(), greater<int>());

    unordered_map<int, int> rank;
    for (int i = 0; i < n; i++) {
        if (rank.find(sorted[i]) == rank.end()) {
            rank[sorted[i]] = i + 1; 
        }
    }

    for (int i = 0; i < n; i++) {
        cout << rank[a[i]] << " ";
    }
    cout << endl;

    return 0;
}
