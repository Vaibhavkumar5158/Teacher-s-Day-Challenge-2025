#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; 
    cin>> s;

    set<char> distinct;    // use set for storing unique elements only

    for(int i=0;i<s.size();i++){
        distinct.insert(s[i]);
    }

    if(distinct.size() %2 ==0){
        cout<< "CHAT WITH HER!" << endl;
    }
    else{
        cout<< "IGNORE HIM!" << endl;
    }
    return 0;
}