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

void chmax(int& a, int b){ a = max(a, b); }

int main(void){

	int N, H, M; cin >> N >> H >> M;
	vector<int> A(N), B(N);
	REP(i,N) cin >> A[i] >> B[i];

	vector<vector<int>> dp(N+1, vector<int>(H+1, -1));
	dp[0][H] = M;

	REP(i,N){
		REP(j,H+1){
			if(dp[i][j] == -1) continue;
			if(A[i] <= j) chmax(dp[i+1][j-A[i]], dp[i][j]);
			if(B[i] <= dp[i][j]) chmax(dp[i+1][j], dp[i][j]-B[i]);
		}
		if(dp[i+1] == vector<int>(H+1, -1)){
			cout << i << endl;
			return 0;
		}
	}

	cout << N << endl;

	return 0;

}
