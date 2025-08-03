#include <bits/stdc++.h>
using namespace std;


int main() {

    string n;
    cin >> n;

    int count = 0;
    for(char c : n){
        if(c == '4' || c == '7'){
            count++;
        }
    }

    string s  = to_string(count);     // convert count into string
    bool lucky = true;
    for(char c : s){
        if(c != '4' && c != '7'){
            lucky = false;
        }

    }
    cout << (lucky ? "YES" : "NO") << endl;
    return 0;
    
}

// check 2 things 
// agar string n 4 ya 7 ke equal h to count ko inc kar do 
// then count ko check kar vo bhi 4 or 7 ke equal h ke nahi 
// Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number --- imp line