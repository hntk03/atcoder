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

	int H, W, D; cin >> H >> W >> D;

	vector<string> S(H);
	REP(i,H) cin >> S[i];

	int ans = 0;
	REP(i1,H){
		REP(j1,W){
			if(S[i1][j1] == '#') continue;
			REP(i2,H){
				REP(j2,W){
					if(S[i2][j2] == '#') continue;
					if(i1 == i2 and j1 == j2) continue;
					int now = 0;
					REP(i,H){
						REP(j,W){
							if(S[i][j] == '#') continue;
							int d1 = abs(i-i1) + abs(j-j1);
							int d2 = abs(i-i2) + abs(j-j2);
							if(d1 <= D or d2 <= D) now++;
						}
					}
					ans = max(ans, now);
				}
			}
		}
	}
	
	cout << ans << endl;

	return 0;

}
