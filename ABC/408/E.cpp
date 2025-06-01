#include <bits/stdc++.h>
#include <atcoder/dsu>

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
	vector<tuple<int, int, int>> edges;
	REP(i,M){
		int a, b, c;
		cin >> a >> b >> c;
		a--; b--;
		edges.emplace_back(a, b, c);
	}


	int ans = 0;
	for(int i = 29; i >= 0; i--){
		atcoder::dsu uf(N);
		for(auto [a, b, c] : edges){
			if(((c >> i) | (ans >> i)) != (ans >> i)) continue;
			uf.merge(a, b);
		}
		if(!uf.same(0, N-1)) ans |= 1 << i;
	}

	cout << ans << endl;
	return 0;
}
