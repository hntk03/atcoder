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

	vector<int> A(N), B(M);
	REP(i,N) cin >> A[i];
	REP(i,M) cin >> B[i];
	
	vector<pair<int, int>> p(N);
	REP(i,N) p[i] = make_pair(A[i], i+1);

	sort(p.begin(), p.end());
	sort(A.begin(), A.end());

	vector<int> minIdx(N);
	minIdx[0] = p.front().second;

	FOR(i,1,N) minIdx[i] = min(minIdx[i-1], p[i].second);

	REP(i,M){
		int idx = upper_bound(A.begin(), A.end(), B[i]) - A.begin();

		if(idx == 0) cout << -1 << endl;
		else cout << minIdx[idx-1] << endl;
	}

	return 0;

}
