#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

#define NUM 5

int main(void){

	ll N; cin >> N;
	vector<ll> A(NUM);

	REP(i,NUM) cin >> A[i];

	ll min_value = A[0];
	REP(i,NUM){
		min_value = min(A[i], min_value);
	}

	ll ans = (N + min_value - 1) / min_value;
	ans += 4;
	cout << ans << endl;

	return 0;

}
