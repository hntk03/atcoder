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

vector<int> to[100005];

int main(void){

	int N, M; cin >> N >> M;

	REP(i,M){
		int a, b; cin >> a >> b;
		--a; --b;
		to[a].push_back(b);
		to[b].push_back(a);
	}

	queue<int> q;
	vector<int> dist(N, INF);
	vector<int> pre(N, -1);

	dist[0] = 0;
	q.push(0);
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int u : to[v]){
			if(dist[u] != INF) continue;
			dist[u] = dist[v] + 1;
			pre[u] = v;
			q.push(u);
		}
	}

	cout << "Yes" << endl;
	REP(i,N){
		if(i == 0) continue;
		int ans = pre[i];
		ans++;
		cout << ans << endl;
	}


	return 0;

}
