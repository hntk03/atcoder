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
	vector<string> S(H);
	REP(i,H) cin >> S[i];

	int Si, Sj, Gi, Gj; cin >> Si >> Sj >> Gi >> Gj;
	Si--; Sj--;
	Gi--; Gj--;

	vector<vector<int>> dist(H, vector<int>(W, INF));
	vector<vector<bool>> used(H, vector<bool>(W));
	deque<pair<int, int>> deq;

	auto push = [&](int i, int j, int d, int cost){
		if(dist[i][j] < d) return ;
		dist[i][j] = d;
		if(cost == 0) deq.push_front(make_pair(i, j));
		else deq.push_back(make_pair(i, j));
	};

	push(Si, Sj, 0, 0);

	const int di[] = {-1, 1, 0, 0};
	const int dj[] = {0, 0, -1, 1};

	while(deq.size()){
		auto [i, j] = deq.front(); deq.pop_front();
		if(used[i][j]) continue;

		used[i][j] = true;
		int d = dist[i][j];

		REP(v,4){
			int ni = i + di[v];
			int nj = j + dj[v];

			if(ni < 0 or ni == H or nj < 0 or nj == W) continue;
			if(S[ni][nj] == '.') push(ni, nj, d, 0);
		}

		REP(v,4){
			int ni = i, nj = j;
			REP(k,2){
				ni += di[v], nj += dj[v];
				if(ni < 0 or ni >= H or nj < 0 or nj >= W) continue;
				push(ni, nj, d+1, 1);
			}
		}
	}

	cout << dist[Gi][Gj] << endl;
	return 0;

}
