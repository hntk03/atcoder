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

map<int, int> vertexToNumber;
vector<vector<int> > g;

void dfs(int v, int unique){
	if(vertexToNumber.count(v) != 0) return ;

	vertexToNumber[v] = unique;
	REP(i,g[v].size()){
		dfs(g[v][i], unique);
	}
}


int main(void){

	int N; cin >> N;	
	g.resize(2*N);

	vector<string> S(N), T(N);
	set<string> st;
	REP(i,N){
		cin >> S[i] >> T[i];
		st.insert(S[i]);
		st.insert(T[i]);
	}

	g.resize(st.size());

	int v = 0;
	map<string, int> mp;
	REP(i,N){
		if(mp.count(S[i]) == 0){
			mp[S[i]] = v;
			v++;
		}
		if(mp.count(T[i]) == 0){
			mp[T[i]] = v;
			v++;
		}

		g[mp[S[i]]].push_back(mp[T[i]]);
		g[mp[T[i]]].push_back(mp[S[i]]);
	}

	int unique = 0;
	REP(i,g.size()){
		if(vertexToNumber.count(i) != 0) continue;
		dfs(i, unique);
		unique++;
	}

	vector<vector<int>> rank(unique, vector<int>(3, 0));

	REP(i,st.size()){
		int num = vertexToNumber[i];
		int r = g[i].size();
		if(r == 1) rank[num][1]++;
		else if(r == 2) rank[num][2]++;
		rank[num][0]++;
	}

	bool ans = true;
	REP(i,rank.size()){
		if(rank[i][1] == 2 and ((rank[i][0]-2) == rank[i][2])) continue;
		ans = false;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
