#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    int max = 0;
    int min = 0;
    int maxVal = arr[0];
    int minVal = arr[0];

    for(int i=0; i<n;i++){
        if(maxVal < arr[i]){
            maxVal = arr[i];
            max = i;
        }
         if(minVal >= arr[i]){
            minVal = arr[i];
            min = i;
        }
    }

    int count = 0;
    if (max < min) {
        
        count = max + (n - 1 - min);
    } else {
       
        count = max + (n - 1 - min) - 1;
    }

    cout << count << endl;
    return 0;

}