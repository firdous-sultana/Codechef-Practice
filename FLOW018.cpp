#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int n;
		cin>>n;
		int fact = 1;
		for(int i=1; i<=n; i++){
			fact *= i;
		}
		cout<<fact<<endl;
	}
	return 0;
}