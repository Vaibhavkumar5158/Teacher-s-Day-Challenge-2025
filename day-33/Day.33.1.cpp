#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    double maxGap = 0;
    for (int i = 1; i < n; i++) {
        maxGap = max(maxGap, (double)(a[i] - a[i - 1]));
    }

    double leftEnd = a[0] - 0;
    double rightEnd = l - a[n - 1];


    double ans = max({maxGap / 2.0, leftEnd, rightEnd});

    cout << fixed << setprecision(10) << ans << "\n";
    return 0;
}