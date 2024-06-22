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

	int N; cin >> N;
	vector<int> A(N);
	REP(i,N) cin >> A[i];
	vector<int> S(N);
	FOR(i,1,N){
		S[i] = S[i-1];
		if(i%2 == 0) S[i] += A[i] - A[i-1];
	}

	auto f = [&](int x){
		int i = lower_bound(A.begin(), A.end(), x) - A.begin() - 1;
		if(i < 0) return 0;
		int res = S[i];
		if(i%2 == 1) res += x - A[i];
		return res;
	};

	int Q; cin >> Q;
	REP(i,Q){
		int l, r; cin >> l >> r;
		int ans = f(r) - f(l);
		cout << ans << endl;
	}

	return 0;

}
