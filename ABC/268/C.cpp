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
	REP(i,N) cin >> P[i];

	vector<int> cnt(N);
	REP(i,N){
		int j = (P[i] - i - 1 + N)%N;
		REP(k,3) cnt[(j+k)%N]++;
	}

	int ans = 0;
	REP(i,N) ans = max(ans, cnt[i]);

	cout << ans << endl;

	return 0;

}
