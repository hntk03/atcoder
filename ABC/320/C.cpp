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

	int M; cin >> M;	
	vector<string> S(3);
	REP(i,3) cin >> S[i];

	int ans = INF;
	REP(t0,300){
		REP(t1,300){
			REP(t2,300){
				if(t0 == t1) continue;
				if(t0 == t2) continue;
				if(t1 == t2) continue;

				if(S[0][t0%M] != S[1][t1%M]) continue;
				if(S[0][t0%M] != S[2][t2%M]) continue;

				ans = min(ans, max(max(t0, t1), t2));
			}
		}
	}

	if(ans == INF) ans = -1;
	cout << ans << endl;

	return 0;

}
