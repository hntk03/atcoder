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

	ll N, M;
	cin >> N >> M;
	N++;


	mint ans;
	REP(i,60){
		if((M>>i)&1){
			ll p = 2LL<<i;
			ll r = N%p;
			ans += (N-r)/2;
			if(r >= (1LL<<i)){
				ans += r-(1LL<<i);
			}
		}
	}

	cout << ans.val() << endl;

	return 0;

}
