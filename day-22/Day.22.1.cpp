#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maximumLength = 1, currentLength = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            currentLength++;
        } else {
            currentLength = 1;
        }
        if (currentLength > maximumLength) {
            maximumLength = currentLength;
        }
    }

    cout << maximumLength;
    return 0;
}
