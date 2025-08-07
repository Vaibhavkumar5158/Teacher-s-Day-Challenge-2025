#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;

    string word = "";
    for (int i = 0; i < s.length(); ) {
        if (s.substr(i, 3) == "WUB") {
            if (!word.empty() && word.back() != ' ') {
                word += ' ';
            }
            i += 3; // Skip "WUB"
        } else {
            word += s[i];
            i++;
        }
    }

    // Remove any extra spaces at the end
    if (!word.empty() && word.back() == ' ') {
        word.pop_back();
    }

    cout << word << endl;
    return 0;
}
