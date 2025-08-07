#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n + 1);      // original input: who gave to whom
    vector<int> ans(n + 1);    // final answer: who received from whom

    for (int i = 1; i <= n; ++i) {
        cin >> p[i];
        ans[p[i]] = i;  // person i gave to p[i], so p[i] received from i
    }

    for (int i = 1; i <= n; ++i) {
        cout << ans[i] << " ";
    }

    return 0;
}
