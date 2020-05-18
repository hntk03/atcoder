#include <bits/stdc++.h>

using namespace std;
using ll = long long;

//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

//print
#define pv(val) cerr << #val << '=' << (val) << endl

const int INF = 1e9;
const int MAX = 100 * 100 + 5;

int main(void){

	int N; cin >> N;
	vector<int> s(N);

	REP(i,N) cin >> s[i];

	vector<bool> dp(MAX, false);
	dp[0] = true;

	REP(i,N){
		for(int j=MAX-1;j >= 0;j--){
			int tmp = j + s[i];
			if(dp[j] and tmp){
				dp[tmp] = true;
			}
		}
	}
	int ans = 0;
	REP(i,MAX){
		if(dp[i] and i % 10 != 0) ans = max(ans, i);
	}

	cout << ans << endl;



	return 0;

}
