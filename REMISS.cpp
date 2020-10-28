#include<bits/stdc++.h>
using namespace std;
int main(){
	int test;
	cin>>test;
	while(test--){
		long a, b;
		cin>> a>> b;
		cout<<max(a, b)<< " " <<(a+b)<<"\n";
	}
	return 0;
}