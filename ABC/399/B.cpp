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
	vector<int> P(N);
	vector<int> ans(N, -1);
	REP(i,N) cin >> P[i];

	auto ok = [&](){

		int cnt = 0;
		REP(i,N) if(ans[i] == -1) cnt++;

		return cnt == 0;
	};
	
	int r = 1;
	int mx = -1;
	while(!ok()){
		REP(i,N){
			mx = max(P[i], mx);
		}

		int k = 0;
		REP(i,N) if(P[i] == mx) k++;

		REP(i,N){
			if(P[i] == mx){
				ans[i] = r;
				P[i] = -1;
			}
		}

		r += k;
		mx = -1;
	}

	REP(i,N) cout << ans[i] << endl;

	return 0;

}
