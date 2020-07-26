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

	int H, W, K; cin >> H >> W >> K;
	char c[10][10];

	REP(i,H) REP(j,W) cin >> c[i][j];

	// int ans = 0;
	// REP(i,1<<H){
	// 	REP(j,1<<W){
	// 		int cnt = 0;
	// 		REP(y,H){
	// 			int b_y = (i>>y)&1;
	// 			REP(x,W){
	// 				int b_x = (j>>x)&1;
	// 				if(!b_y and !b_x and c[y][x] == '#') cnt++;
	// 			}
	// 			if(cnt == K) ans++;
	// 		}
	// 	}
	// }
	//

	int ans = 0;
	REP(i,1<<H){
		REP(j, 1<<W){
			bitset<8> y(i);
			bitset<8> x(j);

			int cnt = 0;
			REP(a,H){
				REP(b,W){
					if(y[a] and x[b] and c[a][b] == '#') cnt++;
				}
			}
			if(cnt == K) ans++;
		}
	}

	cout << ans << endl;

	return 0;

}
