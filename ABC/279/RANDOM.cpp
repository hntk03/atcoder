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
	vector<string> S(H), T(H);
	REP(i,H) cin >> S[i];
	REP(i,H) cin >> T[i];

	map<string, int> mpS;
	map<string, int> mpT;

	REP(i,W){
		string col = "";
		REP(j,H) col += S[j][i];
		mpS[col]++;
	}

	REP(i,W){
		string col = "";
		REP(j,H) col += T[j][i];
		mpT[col]++;
	}

	bool ans = true;
	for(auto item: mpT){
		if(mpS[item.first] != item.second) ans = false;
	}

	if(ans) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;

}
