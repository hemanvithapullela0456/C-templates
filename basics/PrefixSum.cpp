#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	vector<int> v(n);//0 based
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<long long> pref(n+1)//1 based
	for(int i=1;i<=n;i++){
		pref[i]=pref[i-1]+v[i-1];
	}
    //pref[0]=0
	// pref[1]=x[1]
	// pref[2]=x[0]+x[1]
	for(int i=0;i<q;i++){
	int a,b;
	cin>>a>>b;
	cout<<pref[b]-pref[a-1];//sum of all elements from a to b
    }
}
// Time Complexity is O(n+q);
// if we calcyulate the sum normally by iterating it over the loops the loops
// Time Complexity will be O(n*q);
