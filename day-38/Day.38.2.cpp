#include <bits/stdc++.h>
using namespace std;


struct Segment {
    int l, r;
};

struct cmp {
    bool operator()(Segment a, Segment b) {
        int lenA = a.r - a.l + 1, lenB = b.r - b.l + 1;
        if (lenA == lenB) return a.l > b.l;
        return lenA < lenB;
    }
};

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n+1);
        priority_queue<Segment, vector<Segment>, cmp> pq;
        pq.push({1,n});
        for (int i=1;i<=n;i++) {
            Segment s = pq.top(); pq.pop();
            int l=s.l, r=s.r, mid;
            if ((r-l+1)%2) mid=(l+r)/2;
            else mid=(l+r-1)/2;
            a[mid]=i;
            if (l<=mid-1) pq.push({l,mid-1});
            if (mid+1<=r) pq.push({mid+1,r});
        }
        for (int i=1;i<=n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
}