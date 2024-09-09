// the time complexity will be O(sqrt(n))
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
  int n;
  cin >> n;
  vector<int> v;
  for( long long i = 2 ; i*i <= n; i++) {
     while(n%i == 0) {
      v.push_back(i);
      n = n/i ;
     }
  }
  if(n > 1) v.push_back(n);
  for( auto i : v) cout<<i<<" ";
}
//Sieve of Eratosthenes
const int N = 1e6 +1 ;
bool sieve[N];
for(int i=2;i<N;i++){
        sieve[i]=1;
    }
    for(int i=2;i*i<N;i++){//n(log(log(n)))
        if(sieve[i]){
            for(int j=i*i;j<N;j+=i){
                sieve[j]=0;
            }
        }
    }
**// smallest number having its smallest prime factor as i is i*i //**
const int N = 1e6 +1 ;
ints sieve[N];
//spf stands for smallest prime factor
for(int i=2;i<N;i++){
        spf[i]=i;
    }
    for(int i=2;i*i<N;i++){//n(log(log(n)))
        if(spf[i]==i){
            for(int j=i*i;j<N;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
//now to find prime factors when we have spf hash map is as follows
 int n;
  cin >> n;
  vector<int> v;
  while(n > 1){
    v.push_back(spf[n]);
    n= n/spf[n];
  }
//the time complexity for this is O(logn) as in worst case all of its prime factors will be 2 and will be divided by 2 n number of times
