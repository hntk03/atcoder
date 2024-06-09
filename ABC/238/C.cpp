#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using namespace atcoder;
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

using mint = modint998244353;

mint sum(ll x){
	return mint(1+x)*x/2;
}

int main(void){

	ll N; cin >> N;	
	ll l = 1;
	int keta = 1;
	mint ans;
	while(l <= N){
		ll r = l*10;
		// [l,r)

		ll len = min(N+1, r) - l;
		ans += sum(len);

		l *= 10; keta++;
	}

	cout << ans.val() << endl;
	return 0;

}
