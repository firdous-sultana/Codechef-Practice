//Valid triangles
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a, b, c;
		cin>>a>>b>>c;
		(a+b+c == 180) ? cout<<"YES\n": cout<<"NO\n";
	}
	return 0;
}