#include <bits/stdc++.h>
#include <atcoder/all>

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
using namespace atcoder;
using mint = modint998244353;

struct modinv {
  int n; vector<mint> d;
  modinv(): n(2), d({0,1}) {}
  mint operator()(int i) {
    while (n <= i) d.push_back(-d[mint::mod()%n]*(mint::mod()/n)), ++n;
    return d[i];
  }
  mint operator[](int i) const { return d[i];}
} invs;
struct modfact {
  int n; vector<mint> d;
  modfact(): n(2), d({1,1}) {}
  mint operator()(int i) {
    while (n <= i) d.push_back(d.back()*n), ++n;
    return d[i];
  }
  mint operator[](int i) const { return d[i];}
} facts;
struct modfactinv {
  int n; vector<mint> d;
  modfactinv(): n(2), d({1,1}) {}
  mint operator()(int i) {
    while (n <= i) d.push_back(d.back()*invs(n)), ++n;
    return d[i];
  }
  mint operator[](int i) const { return d[i];}
} ifacts;
mint comb(int n, int k) {
  if (n < k || k < 0) return 0;
  return facts(n)*ifacts(k)*ifacts(n-k);
}

int main(void){

	int N = 26;
	int K; cin >> K;

	vector<int> C(N);
	REP(i,N) cin >> C[i];

	vector<mint> dp(K+1);
	dp[0] = 1;

	REP(i,N){
		vector<mint> old(K+1);
		swap(old, dp);
		REP(j,K+1){
			REP(a,C[i]+1){
				int nj = j+a;
				if(nj > K) break;

				dp[nj] += old[j] * comb(nj, a);
			}
		}
	}

	mint ans;
	REP(i,K) ans += dp[i+1];
	cout << ans.val() << endl;

	return 0;

}
