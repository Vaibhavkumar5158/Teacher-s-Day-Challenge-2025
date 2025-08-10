#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> cards(n);

    for(int i=0; i<n;i++){
        cin>>cards[i];
    }

    int l = 0;
    int r = n-1;
    int serejascore = 0, dimascore = 0;
    int turn  = 0; // sereja's turn first 

    while(l <= r){
        int pickcard;
        if(cards[l] > cards[r]){
            pickcard = cards[l];
            l++;
        }
        else{
            pick = cards[r];
            r--;
        }

        if(turn % 2 == 0){
            serejascore += pick;
        }
        else{
            dimaScore += pick;
        }
        turn++;  // ye me bhul jata hu 

    }
    cout<< serejascore << " " << dimascore << endl;

}