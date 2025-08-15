#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int washes = 0;
    
    for (int i = 0; i < n; i++) {
        int dish;
        cin >> dish;
        
        if (dish == 1) {
            if (m > 0) m--;
            else washes++;
        } 
        else { // dish == 2
            if (k > 0) k--;
            else if (m > 0) m--;
            else washes++;
        }
    }
    
    cout << washes;
    return 0;
}
