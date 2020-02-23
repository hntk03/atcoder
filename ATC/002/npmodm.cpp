#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

ll pow_mod(ll n, ll k, ll m){
	if(k == 0){
		return 1;
	}else if(k%2 == 1){
		return pow_mod(n, k-1, m) * n % m;
	}else{
		ll t = pow_mod(n, k/2, m);
		return t * t % m;
	}
}

int main(void){

	ll N, M, P; cin >> N >> M >> P;
	cout << pow_mod(N, P, M) << endl;

	return 0;

}
