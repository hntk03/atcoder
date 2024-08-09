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

	int W, H; cin >> W >> H;
	int N; cin >> N;
	vector<pair<int, int>> pq(N);
	REP(i,N){
		int p, q; cin >> p >> q;
		pq[i] = make_pair(p, q);
	}
	int A; cin >> A;
	vector<int> a(A);
	REP(i,A) cin >> a[i];

	int B; cin >> B;
	vector<int> b(B);
	REP(i,B) cin >> b[i];

	map<pair<int, int>, int> mp;
	REP(i,N){
		int x = lower_bound(a.begin(), a.end(), pq[i].first) - a.begin();
		int y = lower_bound(b.begin(), b.end(), pq[i].second) - b.begin();
		mp[make_pair(x, y)]++;
	}

	int m = N, M = 0;
	for(auto e : mp){
		m = min(m, e.second);
		M = max(M, e.second);
	}

	if(mp.size() < ll((A+1)*(B+1))){
		m = 0;
	}

	printf("%d %d\n", m, M);

	return 0;

}
