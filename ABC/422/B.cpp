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

	const int di[] = {-1, 1, 0, 0};
	const int dj[] = {0, 0, -1, 1};

	bool ans = true;
	REP(i,H){
		REP(j,W){
			int cnt = 0;
			if(S[i][j] == '.') continue;
			REP(k,4){
				int ni = i + di[k], nj = j + dj[k];
				if(ni < 0 or ni == H or nj < 0 or nj == W) continue;
				if(S[ni][nj] == '#') cnt++;
			}

			if(cnt == 2 or cnt == 4) continue;
			else ans = false;
		}
	}
	
	cout << (ans?"Yes":"No") << endl;
	return 0;

}
