#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sumA = 0;
    int sumB = 0;
    int sumC = 0;

    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;

        sumA += x;
        sumB += y;
        sumC += z;
    }

    if(sumA ==0 && sumB == 0 && sumC == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}