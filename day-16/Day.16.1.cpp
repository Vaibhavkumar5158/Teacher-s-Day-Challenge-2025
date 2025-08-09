#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin>> n >> m;

    vector<long long> tasks(m);

    for(int i=0;i<m;i++){
       cin>> tasks[i];        // take input in vector
    }

    long long time = 0; 
    long long curr = 1;

    for(int i=0; i<m; i++){
        if(tasks[i] >= curr){
            time += tasks[i]  - curr;   // move forward
        }
        else{
            // wrap around condition
            time += (n-curr) + tasks[i];

        }
        curr = tasks[i];     // ye me bhul jata hu 
    }
    cout<< time << endl;
    return 0;
}
