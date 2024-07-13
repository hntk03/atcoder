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
	vector<ll> A(N);
	vector<mint> keta(N);
	REP(i,N) cin >> A[i];
	REP(i,N){
		string s = to_string(A[i]);
		ll ten = 1;
		REP(j,s.length()){
			ten *= 10;
		}
		keta[i] = ten;
	}

	mint ketaSum = 0;
	mint Asum = 0;

	FOR(i,1,N){
		ketaSum += keta[i];
		Asum += A[i];
	}

	mint ans = A.front() * ketaSum + Asum;

	FOR(i,1,N){
		ketaSum -= keta[i];
		Asum -= A[i];
		ans += A[i] * ketaSum + Asum;
	}

	cout << ans.val() << endl;

	return 0;

}
