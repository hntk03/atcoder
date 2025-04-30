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

	int N, M, Q; cin >> N >> M >> Q;

	vector<set<int>> p(N);

	REP(i,Q){
		int type; cin >> type;
		if(type == 1){
			int x, y; cin >> x >> y;
			x--; y--;
			p[x].insert(y);
		}else if(type == 2){
			int x; cin >> x;
			x--;
			p[x].insert(M);
		}else{
			int x, y; cin >> x >> y;
			x--; y--;
			if(p[x].count(y) != 0 or p[x].count(M) != 0) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

	return 0;

}
