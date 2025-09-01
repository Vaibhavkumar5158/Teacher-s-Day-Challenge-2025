#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<bool> prime(1000001,1); prime[0]=prime[1]=0;
    for(long long i=2;i*i<=1000000;i++) if(prime[i])
        for(long long j=i*i;j<=1000000;j+=i) prime[j]=0;
    while(n--){
        long long x; cin>>x;
        long long y=sqrtl(x);
        cout<<(y*y==x && prime[y] ? "YES\n" : "NO\n");
    }
}