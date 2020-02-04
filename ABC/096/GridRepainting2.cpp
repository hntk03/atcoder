#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int INF = 1e9;

int main(void){


	int H, W; cin >> H >> W;
	char s[H][W];

	REP(i,H){
		REP(j,W){
			cin >> s[i][j];
		}
	}

	bool ans = true;
	//上下左右
	int dx[4] = {0, 0, -1, 1};
	int dy[4] = {1, -1, 0, 0};
	REP(i,H){
		REP(j,W){
			if(s[i][j] == '.') continue;
			int cnt = 0;
			REP(k,4){
				int y = i + dy[k];
				int x = j + dx[k];
				if(y > -1 and y < H and x > -1 and x < W){
					if(s[y][x] == '#') cnt++;
				}
			}
		if(cnt == 0) ans = false;
		}
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
