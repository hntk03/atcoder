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

	queue<pair<int, int>> que;
	REP(i,H){
		REP(j,W){
			if(S[i][j] == '#') que.push(make_pair(i, j));
		}
	}
	que.push(make_pair(-1, -1));

	const int di[] = {-1, 1, 0, 0};
	const int dj[] = {0, 0, -1, 1};

	while(!que.empty()){
		auto [i, j] = que.front();
		que.pop();
		if(i == -1 and j == -1){
			if(que.empty()) break;
			else{
				queue<pair<int, int>> tmp = que;
				while(!tmp.empty()){
					auto [ti, tj] = tmp.front();
					tmp.pop();
					S[ti][tj] = '#';
				}
				que.push(make_pair(-1, -1));
			} 
		}

		REP(k, 4){
			int ni = i + di[k], nj = j + dj[k];
			if(ni < 0 or ni == H or nj < 0 or nj == W) continue;
			if(S[ni][nj] == '#') continue;
			int cnt = 0;
			REP(l, 4){
				int nni = ni + di[l], nnj = nj + dj[l];
				if(nni < 0 or nni == H or nnj < 0 or nnj == W) continue;
				cnt += S[nni][nnj] == '#';
			}

			if(cnt == 1){
				que.push(make_pair(ni, nj));
			}
		}
	}

	int ans = 0;
	REP(i,H){
		REP(j,W){
			ans += S[i][j] == '#';
		}
	}

	cout << ans << endl;

	return 0;

}
