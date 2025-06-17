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
	vector<vector<ll>> A(H, vector<ll>(W));
	REP(i,H) REP(j,W) cin >> A[i][j];

	vector<vector<bool>> covered(H, vector<bool>(W));

	ll ans = 0;
	auto f = [&](auto f, vector<vector<bool>> covered, int i, int j){
		if(j == W) j = 0, i++;
		if(i == H){
			ll now = 0;
			REP(ni,H) REP(nj,W) if(!covered[ni][nj]) now ^= A[ni][nj];
			ans = max(ans, now);
			return;
		}

		if(covered[i][j]){
			f(f, covered, i, j+1);
		}else{
			// ドミノを設置しない場合
			f(f, covered, i, j+1); 
			// 横向きにドミノを設置する場合
			if(j+1 < W and !covered[i][j+1]){
				covered[i][j] = covered[i][j+1] = true;
				f(f, covered, i, j+1);
				covered[i][j] = covered[i][j+1] = false;
			}
			// 縦向きにドミノを設置する場合
			if(i+1 < H and !covered[i+1][j]){
				covered[i][j] = covered[i+1][j] = true;
				f(f, covered, i, j+1);
				covered[i][j] = covered[i+1][j] = false;
			}
		}
	};

	vector<vector<bool>> x(H, vector<bool>(W));
	f(f, x, 0, 0);
	cout << ans << endl;

	return 0;
}

