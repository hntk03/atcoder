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

	int H, W, K; cin >> H >> W >> K;

	vector<string> S(H);
	REP(i,H) cin >> S[i];

	int ans = 0;

	auto dfs = [&](auto dfs, int i, int j, set<pair<int, int>>& st){
		if(i == H or j == W or i == -1 or j == -1) return;
		if(S[i][j] == '#') return;
		if(st.count(make_pair(i, j)) != 0) return;

		st.insert(make_pair(i, j));
		if(st.size() == K+1){
			ans++;
			st.erase(make_pair(i, j));
			return ;
		}

		dfs(dfs, i+1, j, st);
		dfs(dfs, i, j+1, st);
		dfs(dfs, i-1, j, st);
		dfs(dfs, i, j-1, st);

		st.erase(make_pair(i, j));
	};


	REP(i,H){
		REP(j,W){
			if(S[i][j] == '#') continue;

			set<pair<int, int>> visited;
			dfs(dfs, i, j, visited);
		}
	}

	cout << ans << endl;

	return 0;

}
