//The Block Game
#include<bits/stdc++.h>
using namespace std;

int palin(int n){
	int x = n, rev = 0, dig;
	while(n != 0){
		dig = n % 10;
		rev = rev*10 + dig;
		n /= 10;
	}
	if(rev == x)
		return 1;
	else
		return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		palin(n) ? cout<<"wins\n" : cout<<"loses\n";
	}
	return 0;
}