#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<char> nums;
    // step 1
    for(char c : s){
        if(c != '+'){
            nums.push_back(c);
        }
    }
   // step 2
    sort(nums.begin(), nums.end());
   // step 3
    for(int i = 0; i<nums.size();i++){
        cout << nums[i];
        if(i != nums.size()-1){
            cout<< '+';
        }
    }

    return 0;
}
