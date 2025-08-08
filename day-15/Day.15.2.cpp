#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int>colors;

    int shoe;

    for(int i=0;i<4;i++){
        cin>>shoe;
        colors.insert(shoe);
    }

    cout<< 4 - colors.size() <<endl;
    return 0;
}