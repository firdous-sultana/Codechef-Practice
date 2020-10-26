#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int32_t main(){
	int test;
	cin>>test;
	while(test--){
		int n, k;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++)
				cin>>arr[i];
		int sum = 0, res= 0, flag = 0;
		sum = accumulate(arr, arr+n, sum);
		// cout<<sum;
		for(int i=0; i<n-1; i++){
			if(arr[i] < k){
				res = i;
				flag = 1;
				break;
			}
			arr[i+1] += (arr[i] - k);
		}
		if(flag == 1)
			cout<<res+1<<endl;
		else{
			res = (sum/k)+1;
			cout<<res<<endl;
		}
	}
	return 0;
}