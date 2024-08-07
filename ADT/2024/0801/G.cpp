#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

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

	ll N, M; cin >> N >> M;
	N++;

	mint ans = 0;
	REP(i,61){
		if(!(M>>i&1)) continue;
		ll div = 1 << (i+1);
		ll one = (N / div) * (div/2ll);
		ans += one;

		ll amari = max(N % div - div/2, 0ll);
		ans += amari;
		pv(ans.val());
	}

	cout << ans.val() << endl;
	return 0;

}
