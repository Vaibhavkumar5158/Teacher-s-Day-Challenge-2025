#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    char current  = 'a';
    int minRoationStep = 0;

    for(int i=0;i<s.size();i++){
        int clockwise = abs(s[i] - current);
        int antiClockwise = 26 - clockwise;
        minRoationStep += min(clockwise,antiClockwise);
        current = s[i];
    }

    cout << minRoationStep << endl;
    return 0;

}