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

const int mod = 998244353;

int dp[1000005][10];

void add(int& x, int y){
	x += y;
	x %= mod;
}

int main(void){

	int N; cin >> N;	

	FOR(i,1,10) dp[1][i] = 1;
	FOR(i,2,N+1){
		FOR(d,1,10){
			if(d-1 >= 1) add(dp[i][d], dp[i-1][d-1]);
			add(dp[i][d], dp[i-1][d]);
			if(d+1 <= 9) add(dp[i][d], dp[i-1][d+1]);
		}
	}

	int ans = 0;
	FOR(d,1,10) add(ans, dp[N][d]);
	cout << ans << endl;

	return 0;

}
