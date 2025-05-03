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

int N, M, A[109][19];
int dp[109][1024];

int main(void){

	cin >> N >> M;
	for(int i = 1; i <= M; i++){
		for(int j = 1; j <= N; j++){
			cin >> A[i][j];
		}
	}

	for(int i = 0; i <= M; i++){
		for(int j = 0; j <= (1 << N); j++){
			dp[i][j] = INF;
		}
	}

	dp[0][0] = 0;
	for(int i = 1; i <= M; i++){
		for(int j = 0; j < (1 << N); j++){

			int already[19];
			for(int k = 1; k <= N; k++){
				if((j / (1 << (k-1))) % 2 == 0) already[k] = 0;
				else already[k] = 1;
			}

			int v = 0;
			for(int k = 1; k <= N; k++){
				if(already[k] == 1 or A[i][k] == 1) v += (1 << (k-1));
			}

			dp[i][j] = min(dp[i][j], dp[i-1][j]);
			dp[i][v] = min(dp[i][v], dp[i-1][j]+1);

		}
	}

	if(dp[M][(1<<N) - 1] == INF) cout << -1 << endl;
	else cout << dp[M][(1<<N) - 1] <<  endl;

	return 0;
}
