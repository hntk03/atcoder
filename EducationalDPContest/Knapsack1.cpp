#include <bits/stdc++.h>



using namespace std;

typedef vector<int> VI;
typedef vector<string> VS;


//container util
#define SORT(c) sort((c).begin(),(c).end())

//repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

const int N_MAX = 110;
const int W_MAX = 1000000;


int main(void){

	int N, W; cin >> N >> W;
	vector<int> w(N);
	vector<int> v(N);
	REP(i,N) cin >> w[i] >> v[i];
	vector<vector<long long>> dp(N+1, vector<long long>(W+1, 0));

	REP(i,N){
		REP(sum_w,W+1){
			if(sum_w - w[i] >= 0){
				dp[i+1][sum_w] = max(dp[i+1][sum_w], dp[i][sum_w-w[i]] + v[i]);
			}
			dp[i+1][sum_w] = max(dp[i+1][sum_w], dp[i][sum_w]);
		}
	}

	cout << dp[N][W] << endl;

	return 0;

}
