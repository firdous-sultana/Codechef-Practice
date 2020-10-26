#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		int n, k, x, y;
		cin>>n>>k>>x>>y;
		int x1 = x;
		int flag = 0;
		for(int i=x; i<=n; ){
			if(i == y){
				flag = 1;
				break;
			}

			i = (i+k)%n;
			if(i == x1){
				flag = 0;
				break;
			}
		}

		if(flag)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}