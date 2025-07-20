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

void solve1(){
	int N; cin >> N;
	string S; cin >> S;

	bool ans = false;
	auto dfs = [&](auto f, int now){
		if(ans) return;
		int last = (1<<N)-1;
		if(now == last){
			ans = S[last-1] == '0';
			return ;
		}

		REP(i,N){
			if((now >> i)&1) continue;
			int next = now | (1<<i);
			if(S[next-1] == '1') continue;
			f(f, next);
		}
	};

	dfs(dfs, 0);
	cout << (ans?"Yes":"No") << endl;
}

void solve2(){
	int N; cin >> N;
	string S; cin >> S;
	const int mx = 1 << N;
	vector<bool> dp(mx);
	dp[0] = true;

	REP(i,mx){
		if(!dp[i]) continue;
		REP(j,N){
			if((i>>j)&1) continue;
			int next = i | (1 << j);
			if(S[next-1] == '1') continue;
			dp[next] = true;
		}
	}
	cout << (dp[mx-1]?"Yes":"No") << endl;
}

int main(void){

	int T; cin >> T;
	REP(i,T) solve2();


	return 0;

}
