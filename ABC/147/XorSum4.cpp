#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;
const int mod = 1e9 + 7;

int main(void){

	int N; cin >> N;
	vector<ll> A(N);

	REP(i,N) cin >> A[i];

	ll ans = 0;
	REP(i,N-1){
		FOR(j,i+1,N){
			ans += (A[i] % mod) ^ (A[j] % mod);
		}
	}

	cout << ans << endl;

	return 0;

}
