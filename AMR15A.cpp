//Mahasena
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	int e_ctr=0, o_ctr=0;
	for(int i=0; i<n; i++){
		if( arr[i] & 1)
			o_ctr++;
		else
			e_ctr++;
	}
	(e_ctr > o_ctr) ? cout<<"READY FOR BATTLE\n" : cout<<"NOT READY\n";
	return 0;
}