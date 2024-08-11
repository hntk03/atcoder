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

	int M = 0;
	REP(i,N) M = max(M, (int)S[i].length());

	vector<string> T = S;

	REP(i,N){
		while(T[i].size() < M) T[i] += '*';
	}

	vector<string> ans(M);

	REP(j,M){
		for(int i=N-1;i>=0;i--){
			ans[j] += T[i][j];
		}
	}

	REP(i,M){
		while(ans[i].back() == '*') ans[i].pop_back();
	}

	REP(i,M) cout << ans[i] << endl;
	
	return 0;

}
