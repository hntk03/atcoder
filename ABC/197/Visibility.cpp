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

	int H, W, X, Y; cin >> H >> W >> X >> Y;
	vector<string> S(H);
	REP(i,H) cin >> S[i];

	int ans = 0;
	int x = X-1-1;
	int y = Y-1;
	while(x >= 0 and S[x][y] == '.'){
		x--;
		ans++;
	}
	x = X-1+1;
	y = Y-1;
	while(x < H and S[x][y] == '.'){
		ans++;
		x++;
	}
	x = X-1;
	y = Y-1-1;
	while(y >= 0 and S[x][y] == '.'){
		y--;
		ans++;
	}
	x = X-1;
	y = Y-1+1;
	while(y < W and S[x][y] == '.'){
		ans++;
		y++;
	}
	
	if(S[X-1][Y-1] == '.') ans++;
	cout << ans << endl;

	return 0;

}
