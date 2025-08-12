#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k*l;
    int totalLime = c*d;
    int totalSalt = p;

    int drinkToast = totalDrink/nl
    int limeToast = totalLime/1;
    int saltToast = totalSalt/np;

    int totalToast = min({drinkToast, limeToast,saltToast});

    cout << totalToast/n << endl;
    return 0;
}