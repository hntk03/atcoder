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

	int H, W, Q; cin >> H >> W >> Q;

	vector<set<int>> rowSet(H), colSet(W);

	REP(i,H){
		REP(j,W){
			rowSet[i].insert(j);
			colSet[j].insert(i);
		}
	}

	auto erase = [&](int i, int j){
		rowSet[i].erase(j);
		colSet[j].erase(i);
	};

	REP(i,Q){
		int R, C; cin >> R >> C;
		R--; C--;

		{
			auto &st = rowSet[R];
			auto it = st.lower_bound(C);
			if(it != st.end() and *it == C){
				erase(R, C);
				continue;
			}else{
				if(it != st.end()) erase(R, *it);
				it = st.lower_bound(C);
				if(it != st.begin()) it--, erase(R, *it);
			}
		}

		{
			auto &st = colSet[C];
			auto it = st.lower_bound(R);
			if(it != st.end()) erase(*it, C);
			it = st.lower_bound(R);
			if(it != st.begin()) it--, erase(*it, C);
		}
	}

	int ans = 0;
	REP(i,H) ans += rowSet[i].size();
	cout << ans << endl;

	return 0;

}
