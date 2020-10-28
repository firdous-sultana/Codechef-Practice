//Smallest Numbers of Notes
#include<bits/stdc++.h>
using namespace std;
#define int int64_t

int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ctr = 0;
		ctr += (n/100);
		n %= 100;

		ctr += (n/50);
		n %= 50;

		ctr += (n/10);
		n %= 10;

		ctr += (n/5);
		n %= 5;

		ctr += (n/2);
		n %= 2;

		ctr += (n/1);
		n %= 1;

		cout<<ctr<<endl;
	}
	return 0;
}