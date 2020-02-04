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
	int x[4] = {0, 0, -1 , 1};
	int y[4] = {1, -1, 0, 0};
	REP(i,H){
		REP(j,W){
			if(s[i][j] == '.') continue;
			int cnt = 0;
			REP(k,4){
				int a = i + y[k];
				int b = j + x[k];
				if(a > -1 and a < H and b > -1 and b < W){
					if(s[a][b] == '#') cnt++;
				}
			}
		if(cnt == 0) ans = false;
		}
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
