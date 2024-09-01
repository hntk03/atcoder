#include <bits/stdc++.h>
#include <atcoder/all>

using namespace std;
using ll = long long;
using namespace atcoder;

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

	int N, D; cin >> N >> D;
	vector<pair<int, int>> XY(N);
	REP(i,N){
		int X, Y; cin >> X >> Y;
		XY[i] = make_pair(X, Y);
	}

	dsu uf(N);
	vector<set<int>> g(N);
	REP(i,N){
		REP(j,N){
			if(i == j) continue;

			int dx = XY[i].first - XY[j].first;
			int dy = XY[i].second - XY[j].second;
			int d = dx*dx + dy*dy;
			if(d <= D*D){
				uf.merge(i, j);
			}
		}
	}

	REP(i,N){
		if(uf.same(0,i)) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}
