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

	vector<vector<int>> ans;

	vector<int> start(N), end(N);

	start[0] = 1;
	FOR(i,1,N) start[i] = start[i-1] + 10;
	end[N-1] = M;
	for(int i=N-2;i>=0;i--) end[i] = end[i+1] - 10;

	vector<int> now;
	auto dfs = [&](auto dfs, int idx) {
		if(idx == N){
			ans.push_back(now);
			return ;
		}

		int s;
		if(idx == 0) s = start[idx];
		else s = now.back() + 10;

		FOR(i,s,end[idx]+1){
			now.push_back(i);
			dfs(dfs, idx+1);
			now.pop_back();
		}
	};

	dfs(dfs, 0);

	cout << ans.size() << endl;
	REP(i,ans.size()){
		REP(j,ans[i].size()){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

}
