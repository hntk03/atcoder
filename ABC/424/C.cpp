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

	int N; cin >> N;
	vector<vector<int>> g(N);
	vector<int> got;
	REP(i,N){
		int A, B; cin >> A >> B;
		if(A == 0 and B == 0){
			got.push_back(i);
		}else{
			A--; B--;
			g[A].push_back(i);
			g[B].push_back(i);
		}
	}

	vector<bool> visited(N);
	queue<int> que;

	for(int v : got){
		visited[v] = true;
		que.push(v);
	}

	while(que.size()){
		int v = que.front(); que.pop();

		for(int nv : g[v]){
			if(visited[nv]) continue;
			visited[nv] = true;
			que.push(nv);
		}
	}

	int ans = 0;
	REP(i,N) if(visited[i]) ans++;
	cout << ans << endl;

	return 0;

}
