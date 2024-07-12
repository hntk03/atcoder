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

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	
	vector<mint> dp(10);
	dp[A[0]] = 1;

	FOR(i,1,N){
		int na = A[i];
		vector<mint> p(10);
		swap(p, dp);
		REP(j,10){
			dp[(j+na)%10] += p[j];
			dp[(j*na)%10] += p[j];
		}
	}

	REP(i,10) cout << dp[i].val() << endl;

	return 0;

}
