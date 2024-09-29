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

int main(void){

	int N, M; cin >> N >> M;
	vector<int> A(N);
	REP(i,N) cin >> A[i];

	sort(A.begin(), A.end());

	dsu uf(N);
	REP(i,N){
		int j = (i+1)%N;
		if(A[i] == A[j] || (A[i]+1)%M == A[j]){
			uf.merge(i, j);
		}
	}

	vector<ll> s(N);
	REP(i,N) s[uf.leader(i)] += A[i];

	ll mx = 0, tot = 0;
	REP(i,N) mx = max(mx, s[i]);
	REP(i,N) tot += A[i];

	cout << tot-mx << endl;

	return 0;

}
