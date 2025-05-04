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

	int N, M; cin >> N >> M;
	vector<int> C(N);
	REP(i,N) cin >> C[i];
	vector<vector<int>> A(M);
	REP(i,M){
		int K; cin >> K;
		REP(j,K){
			int a; cin >> a;
			a--;
			A[i].push_back(a);
		}
	}

	const ll INF = 1e18;
	ll ans = INF;
	vector<int> p3(N+1, 1);
	REP(i,N) p3[i+1] = p3[i]*3;
	REP(s,p3[N]){
		vector<int> t(N);
		REP(i,N) t[i] = s/p3[i]%3;
		ll cost = 0;
		REP(i,N) cost += C[i] * t[i];
		REP(j,M){
			int cnt = 0;
			for(int i : A[j]) cnt += t[i];
			if(cnt < 2) cost = INF;
		}
		ans = min(ans, cost);
	}

	cout << ans << endl;
	return 0;
}
