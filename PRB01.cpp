//Primality Test
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	int flag = false;
	for(int i=2; i<= sqrt(n); i++){
		if(n%i == 0){
			flag = true;
			break;
		}
	}
	if(!flag && n!= 1)
		return true;
	else
		return false;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n; cin>>n;
		isPrime(n) ? cout<<"yes\n" : cout<<"no\n";
	}
	return 0;
}