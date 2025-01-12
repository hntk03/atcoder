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
	vector<vector<int>> X(H, vector<int>(W));
	REP(i,H){
		REP(j,W){
			cin >> X[i][j];
		}
	}

	vector<vector<int>> S(H+1, vector<int>(W+1));

	FOR(i,1,H+1){
		FOR(j,1,W+1){
			S[i][j] = S[i-1][j] + X[i-1][j-1];
		}
	}

	FOR(i,1,H+1){
		FOR(j,1,W+1){
			S[i][j] += S[i][j-1];
		}
	}

	int Q; cin >> Q;
	REP(i,Q){
		int A, B, C, D; cin >> A >> B >> C >> D;
		A--; B--; C--; D--;
		int ans = S[C+1][D+1] + S[A][B] - S[A][D+1] - S[C+1][B];
		cout << ans << endl;
	}

	return 0;
}
