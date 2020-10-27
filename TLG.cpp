#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s1, s2, c1=0, c2=0, d, curr_lead, win, max1 = 0;
	while(n--){
		cin>> s1>> s2;
		c1 += s1;
		c2 += s2;
		if(c1 > c2){
			d = c1 - c2;
			curr_lead = 1;
		}
		else{
			d = c2 - c1;
			curr_lead = 2;
		}
		if(d > max1){
			max1 = d;
			win = curr_lead;
		}
	}
		cout<<win<<" "<<max1<<endl;
	return 0;
}