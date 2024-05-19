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

vector<int> getIndex(bitset<10> b){
	vector<int> ret;
	REP(i,10){
		if(b[i]) ret.push_back(i);
	}

	return ret;
}

int main(void){

	int H1, W1; cin >> H1 >> W1;	
	vector<vector<int> > A(H1, vector<int>(W1));
	REP(i,H1) REP(j,W1) cin >> A[i][j];
	
	int H2, W2; cin >> H2 >> W2;
	vector<vector<int> > B(H2, vector<int>(W2));
	REP(i,H2) REP(j,W2) cin >> B[i][j];

	bool ans = false;
	REP(i,1<<H1){
		if(__builtin_popcount(i) != H2) continue;
		REP(j,1<<W1){
			if(__builtin_popcount(j) != W2) continue;

			bitset<10> bi(i), bj(j);
			vector<int> hi = getIndex(bi), wj = getIndex(bj);

			bool ok = true;
			REP(h,H2){
				REP(w,W2){
					if(B[h][w] != A[hi[h]][wj[w]]) ok = false;
				}
			}

			if(ok) ans = true;
		}
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
