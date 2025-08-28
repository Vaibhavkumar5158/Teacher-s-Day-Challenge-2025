#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Step 1: Find which number is the majority (common value)
        int majority;
        if (a[0] == a[1] || a[0] == a[2]) {
            majority = a[0];
        } else {
            majority = a[1];
        }

        // Step 2: Find the unique element
        for (int i = 0; i < n; i++) {
            if (a[i] != majority) {
                cout << (i + 1) << "\n"; // index is 1-based
                break;
            }
        }
    }

    return 0;
}
