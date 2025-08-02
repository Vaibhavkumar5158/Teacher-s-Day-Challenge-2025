#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;

    cin >> s1 >> endl;
    cin >> s2 >> endl;

    // convert both into lowersace
    for(int  i = 0; i<s1.length();i++){
         if(s1[i]>='A' && s1[i]<='Z'){
                s1[i] = s1[i]-'A'+'a';
        }
    }

    for(int  i = 0; i<s2.length();i++){
         if(s2[i]>='A' && s2[i]<='Z'){
                s2[i] = s2[i]-'A'+'a';
        }
    }

    if(s1 < s2){
        cout<< -1 << endl;   
    }
    else if(s1 > s2){
        cout<< 1 << endl;   
    }
    else{
         cout<< 0 << endl; 
    }

    return 0;

}


// bhut easy h 
// approach 
// dono string ko lowercase me convert karke 
// 3 condition check kar lo according to ques 