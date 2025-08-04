#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q,p;
	int count = 0;
	cin>>n;
	while(n--)
	{
	   cin >>p>>q;
	   if(q-p >= 2){
	       count++;
	   }
	}
	cout<< count;
}
