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
	
	int N; cin >> N;
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	vector<int> r(N), c(N);

	REP(i,N){
		int cnt = 0;
		REP(j,N){
			if(S[i][j] == 'o')  cnt++;
		}
		r[i] = cnt;
	}

	REP(i,N){
		int cnt = 0;
		REP(j,N){
			if(S[j][i] == 'o')  cnt++;
		}
		c[i] = cnt;
	}

	ll ans = 0;
	REP(i,N){
		REP(j,N){
			if(S[i][j] == 'o'){
				ans += (r[i] - 1) * (c[j] - 1);
			}
		}
	}

	cout << ans << endl;

	return 0;

}
