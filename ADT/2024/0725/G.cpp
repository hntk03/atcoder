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
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	set<string> ts;
	REP(i,M){
		string T; cin >> T;
		ts.insert(T);
	}

	int max_u = 16 - (N-1);
	REP(i,N) max_u -= S[i].size();

	vector<int> used(N);
	auto dfs = [&](auto f, int i, string s, int u) -> bool {
		if(i == N){
			if(s.size() < 3) return false;
			if(ts.count(s)) return false;
			cout << s << endl;
			return true;
		}
		if(u){
			if(f(f, i, s+'_', u-1)) return true;
		}
		REP(j,N) if(!used[j]){
			used[j] = true;
			if(f(f, i+1, s+'_'+S[j], u)) return true;
			used[j] = false;
		}
		return false;
	};

	REP(i,N){
		used[i] = true;
		if(dfs(dfs, 1, S[i], max_u)) return 0;
		used[i] = false;
	}

	cout << -1 << endl;

	return 0;

}
