#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int lower = 0;
    int upper = 0;

    for(int i=0; i<s.size();i++){
        if(islower(s[i])){
            lower++;
        }
        else{
            upper++
        }
    }

    for(int i=0; i<s.size();i++){
        if(islower){
            s[i] = tolower(s[i]);
        }
        else{
            s[i] = toupper(s[i]);
        }
    }

    cout<<s;
}