#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    long long mx = *max_element(b.begin(), b.end());
    long long mn = *min_element(b.begin(), b.end());

    long long diff = mx - mn;

    long long cntMin = count(b.begin(), b.end(), mn);
    long long cntMax = count(b.begin(), b.end(), mx);

    long long ways;
    if (mx == mn) {
        ways = n * (n - 1) / 2;
    } else {
        ways = cntMin * cntMax;
    }

    cout << diff << " " << ways << endl;
    return 0;
}