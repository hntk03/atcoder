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

	int ans = 1e9;

	vector<map<int, int> > v(10);
	REP(i,N){
		REP(j,S[i].length()){
			int target = S[i][j] - '0';
			v[target][j]++;
		}
	}

	REP(i,10){
		map<int, int> mp;
		for(auto x : v[i]){
			REP(j,x.second){
				mp[x.first+10*j] = 1;
			}
		}

		int now = 0;
		for(auto x : mp){
			now = max(now, x.first);
		}

		ans = min(ans, now);
	}

	cout << ans << endl;

	return 0;

}
