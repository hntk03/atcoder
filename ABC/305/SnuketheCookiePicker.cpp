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

	const int dx[] = {1, 0, -1, 0};
	const int dy[] = {0, -1, 0, 1};

	REP(i,H){
		REP(j,W){
			if(S[i][j] == '#') continue;

			int cnt = 0;
			REP(k,4){
				int x = i + dx[k];
				int y = j + dy[k];
				if(x < 0 or y < 0 or x >=H or y >= W) continue;

				if(S[x][y] == '#') cnt++;
			}
			if(cnt > 1){
				cout << i+1 << " " << j+1 << endl;
				return 0;
			}
		}
	}


	return 0;

}
