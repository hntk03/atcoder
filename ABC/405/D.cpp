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

	vector<vector<int>> dist(H, vector<int>(W, -1));
	vector<vector<char>> mp(H, vector<char>(W));
	queue<pair<int, int>> que;

	REP(i,H){
		REP(j,W){
			if(S[i][j] == 'E'){
				que.push(make_pair(i, j));
				dist[i][j] = 0;
			}
		}
	}

	const int di[] = {1, -1, 0, 0};
	const int dj[] = {0, 0, -1, 1};

	while(!que.empty()){
		auto [i, j] = que.front();
		que.pop();

		REP(d,4){
			int ni = i + di[d];
			int nj = j + dj[d];
			if(ni < 0 or ni == H or nj < 0 or nj == W) continue;
			if(S[ni][nj] == '#') continue;
			if(dist[ni][nj] != -1) continue;

			dist[ni][nj] = dist[i][j] + 1;
			que.push(make_pair(ni, nj));

			if(d == 0){
				mp[ni][nj] = '^';
			}else if(d == 1){
				mp[ni][nj] = 'v';
			}else if(d == 2){
				mp[ni][nj] = '>';
			}else{
				mp[ni][nj] = '<';
			}
		}
	}

	REP(i,H){
		REP(j,W){
			if(S[i][j] == 'E' or S[i][j] == '#') cout << S[i][j];
			else cout << mp[i][j];
		}
		cout << endl;
	}

	return 0;

}
