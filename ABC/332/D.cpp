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

	int H, W; cin >> H >> W;
	vector<vector<int>> A(H, vector<int>(W)), B(H, vector<int>(W));
		
	REP(i,H) REP(j,W) cin >> A[i][j];
	REP(i,H) REP(j,W) cin >> B[i][j];

	queue<vector<vector<int>>> q;
	map<vector<vector<int>>, int> dist;

	auto push = [&](vector<vector<int>>& s, int d){
		if(dist.count(s)) return;
		dist[s] = d;
		q.push(s);
	};

	push(A, 0);
	while(!q.empty()){
		vector<vector<int>> s = q.front(); q.pop();
		int d = dist[s];
		REP(i,H-1){
			vector<vector<int>> ns = s;
			swap(ns[i], ns[i+1]);
			push(ns, d+1);
		}

		REP(j,W-1){
			vector<vector<int>> ns = s;
			REP(i,H) swap(ns[i][j], ns[i][j+1]);
			push(ns, d+1);
		}
	}

	if(dist.count(B)) cout << dist[B] << endl;
	else cout << -1 << endl;

	return 0;

}
