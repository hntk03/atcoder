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

	int imin = H, imax = 0, jmin = W, jmax = 0;
	REP(i,H){
		REP(j,W){
			if(S[i][j] == '#'){
				imin = min(imin, i);
				imax = max(imax, i);
				jmin = min(jmin, j);
				jmax = max(jmax, j);
			}
		}
	}

	if(imin > imax or jmin > jmax){
		cout << "No" << endl;
		return 0;
	}

	FOR(i, imin, imax+1){
		FOR(j, jmin, jmax+1){
			if(S[i][j] == '.'){
				cout << "No" << endl;
				return 0;
			}
		}
	}

	cout << "Yes" << endl;
	return 0;

}
