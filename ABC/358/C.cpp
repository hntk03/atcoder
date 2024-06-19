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

	int N, M; cin >> N >> M;	
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	int ans = N;
	REP(i,1<<N){
		vector<bool> taste(M);
		REP(j,N){
			if((i>>j)&1){
				REP(k,M){
					if(S[j][k] == 'o') taste[k] = true;
				}
			}
		}

		bool ok = true;
		REP(j,M) if(!taste[j]) ok = false;

		if(ok) ans = min(ans, __builtin_popcount(i));

	}

	cout << ans << endl;

	return 0;

}
