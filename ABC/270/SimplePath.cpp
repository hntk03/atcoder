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

	int N, X, Y; cin >> N >> X >> Y;

	vector<vector<int> > to(N+1);

	REP(i,N-1){
		int U, V; cin >> U >> V;
		
		to[U].push_back(V);
		to[V].push_back(U);

	}

	vector<int> ans;
	auto dfs = [&](auto f, int v, int p=-1) -> bool {
		if(v == X){
			ans.push_back(v);
			return true;
		}


		for(int u : to[v]){
			if(u == p) continue;
			if(f(f, u, v)){
				ans.push_back(v);
				return true;
			} 

		}
		return false;
	};

	dfs(dfs, Y);

	for(auto v : ans) cout << v << " ";
	cout << endl;

	return 0;

}
