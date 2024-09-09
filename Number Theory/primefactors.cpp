//finding prime factors in O(sqrt(n)) time
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
  int n;
  cin >> n;
  vector<int> v;
  for( int i = 1; i*i < n; i++) {
     if(n%i == 0) {
      v.push_back(i);
      if(n/i!=i) v.push_back(n/i);
     }
  }
  for( auto i : v) cout<<i<<" ";
}
