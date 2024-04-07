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

using P = pair<int, int>;

struct Med{
	int r, c, e;
	Med(){}
	Med(int r, int c, int e): r(r), c(c), e(e){}
};

const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, -1, 0, 1};

int main(void){

	int H, W; cin >> H >> W;
	vector<string> S(H);
	REP(i,H) cin >> S[i];

	int si = 0, sj = 0, ti = 0, tj = 0;
	REP(i,H){
		REP(j,W){
			if(S[i][j] == 'S'){
				si = i;
				sj = j;
			}
			if(S[i][j] == 'T'){
				ti = i;
				tj = j;
			}
		}
	}

	int N; cin >> N;
	vector<Med> meds(N);
	REP(i,N){
		int r, c, e; cin >> r >> c >> e;
		r--; c--;
		meds[i] = Med(r, c, e);
	}

	meds.push_back(Med(si, sj, 0));
	meds.push_back(Med(ti, tj, 0));
	N += 2;

	int smi = N-2, tmi = N-1;

	const int INF = 1001001001;
	vector<vector<int> > to(N);
	REP(sv,N){
		auto [sr, sc, se] = meds[sv];
		vector<vector<int> > dist(H, vector<int>(W, INF));
		queue<P> q;
		dist[sr][sc] = 0;
		q.push(make_pair(sr, sc));
		while(!q.empty()){
			auto top = q.front(); q.pop();
			REP(dir, 4){
				int ni = top.first+di[dir], nj = top.second+dj[dir];
				if(ni < 0 || nj < 0 || ni >= H || nj >= W) continue;
				if(S[ni][nj] == '#') continue;
				if(dist[ni][nj] != INF) continue;
				dist[ni][nj] = dist[top.first][top.second] + 1;
				q.push(make_pair(ni, nj));
			}
		}

		REP(v,N){
			if(sv != v){
				auto [r, c, e] = meds[v];
				if(dist[r][c] <= se) to[sv].push_back(v);
			}
		}
	}

	vector<int> dist(N, INF);
	queue<int> q;
	dist[smi] = 0; q.push(smi);
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int u : to[v]){
			if(dist[u] != INF) continue;
			dist[u] = dist[v] + 1;
			q.push(u);
		}
	}
	
	if(dist[tmi] != INF) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
