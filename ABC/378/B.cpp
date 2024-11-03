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
	vector<int> q(N), r(N);

	REP(i,N) cin >> q[i] >> r[i];
	
	int Q; cin >> Q;

	vector<int> t(Q), d(Q);
	REP(i,Q) cin >> t[i] >> d[i];
	REP(i,Q) t[i]--;

	REP(i,Q){

		int now = r[t[i]];

		while(now < d[i]) now += q[t[i]];

		cout << now << endl;
	}


	return 0;

}
