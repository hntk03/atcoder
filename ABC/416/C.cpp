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

	int N, K, X; cin >> N >> K >> X;
	X--;
	vector<string> S(N);
	REP(i,N) cin >> S[i];

	vector<string> ans;

	auto dfs = [&](auto dfs, int k, string s){
		if(k == K){
			ans.push_back(s);
			return ;
		} 

		REP(i,N){
			dfs(dfs, k+1, s+S[i]);
		}
	};

	dfs(dfs, 0, "");

	sort(ans.begin(), ans.end());
	cout << ans[X] << endl;
	return 0;

}
