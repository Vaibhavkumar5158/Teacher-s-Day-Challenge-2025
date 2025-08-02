#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n; // no of problems

    int count = 0;   // to count how many problems they will solve
    for (int i = 0; i < n; i++) {
        int p, v, t;
        cin >> p >> v >> t;

        int sum = p + v + t;     // sum how many are confident
        if (sum >= 2) {
            count++;
        }
    }
    cout << count << endl;


    return 0;
}