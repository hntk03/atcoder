#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

ll nc2(ll n){
	return n*(n-1)/2;
}


int main(void){

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	REP(i,N) A[i]--;
	vector<int> cnt(N);
	REP(i,N) cnt[A[i]]++;

	ll total = 0;
	REP(i,N){
		total += nc2(cnt[i]);
	}

	REP(i,N){
		ll ans = total;
		ans -= nc2(cnt[A[i]]);
		ans += nc2(cnt[A[i]]-1);
		cout << ans << endl;
	}
	


	return 0;

}
