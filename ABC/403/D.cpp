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

int solve(vector<int> a){
	int N = a.size();
	vector<vector<int>> dp(N+1, vector<int>(2));

	REP(i,N){
		dp[i+1][1] = max(dp[i][0], dp[i][1]);
		dp[i+1][0] = dp[i][1] + a[i];
	}
	int mx = max(dp[N][0], dp[N][1]);
	int sum = 0;
	REP(i,N) sum += a[i];
	return sum - mx;
}

int main(void){

	int N, D; cin >> N >> D;

	const int M = 1000005;
	vector<int> cnt(M);
	REP(i,N){
		int A; cin >> A;
		cnt[A]++;
	}


	int ans = 0;
	if(D == 0){
		REP(i,M) if(cnt[i] > 0) ans += cnt[i] - 1;
	}else{
		REP(si,D){
			vector<int> a;
			for(int i = si; i < M; i+=D){
				a.push_back(cnt[i]);
			}
			ans += solve(a);
		}
	}
	cout << ans << endl;
	return 0;

}
