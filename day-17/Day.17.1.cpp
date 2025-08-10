#include <bits/stdc++.h>
using namespace std;

int  main(){
    int  n,m,a,b;
    cin>> n >> m >> a >> b;

    // single ticket buy
    int cost1 = n*a;

    // only special ride ticket
    int cost2 = ceil((double)n/m)*b;

    // mix (special + single ride)
    int cost3 = (n/m)*b + (n%m)*a;

    cout<< min({cost1, cost2, cost3}) << endl;

} 