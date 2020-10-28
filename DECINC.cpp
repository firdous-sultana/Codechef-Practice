//Decrement OR Increment
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	(n%4) ? cout<<--n<<endl : cout<< ++n<<endl;
	return 0;
}