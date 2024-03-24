#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())
#define all(a) (a).begin(), (a).end()

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;

int main(void){

	ll N, K; cin >> N >> K;	
	set<ll> st;
	REP(i,N){
		ll A; cin >> A;
		st.insert(A);
	}

	ll sum = K*(K+1)/2;

	for(auto x : st){
		if(x > K) continue;
		sum -= x;
	}

	cout << sum << endl;

	return 0;

}
