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
	vector<vector<bool> > graph(N, vector<bool>(N, false));

	REP(i,N-1){
		int a, b; cin >> a >> b;
		a--; b--;
		graph[a][b] = true;
		graph[b][a] = true;
	}

	bool ans = false;
	REP(i,N){
		int cnt = 0;
		REP(j,N){
			if(graph[i][j]) cnt++;
		}
		if(cnt == N-1) ans = true;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
