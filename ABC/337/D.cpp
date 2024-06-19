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

int solve(string S, int K){
	int N = S.size();

	int res = INF;
	{
		int xs = 0, es = 0, len = 0;
		REP(i,N){
			xs += S[i] == 'x';
			es += S[i] == '.';
			len++;
			if(len > K){
				xs -= S[i-K] == 'x';
				es -= S[i-K] == '.';
				len --;
			}

			if(len == K){
				if(xs == 0) res = min(res, es);
			}
		}
	}

	return res;

}

int main(void){

	int H, W, K; cin >> H >> W >> K;
	vector<string> S(H);
	REP(i,H) cin >> S[i];

	int ans = INF;
	REP(ri,2){
		REP(i,H){
			ans = min(ans, solve(S[i], K));
		}

		vector<string> t(W, string(H, '.'));
		REP(i,H) REP(j,W) t[j][i] = S[i][j];
		swap(H,W);
		S = t;
	}

	if(ans == INF) ans = -1;
	cout << ans << endl;

	return 0;

}
