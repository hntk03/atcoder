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

void solve(){

	int N; cin >> N;
	string S; cin >> S;

	vector<int> cnt(2);
	vector<pair<char, int>> d(1, {S[0], 0});
	for(char c : S){
		cnt[c-'0']++;
		if(d.back().first == c) d.back().second++;
		else d.push_back(make_pair(c, 1));
	}

	int ans = N*2;
	for(auto [c, num] : d){
		int i = c-'0';
		vector<int> ncnt = cnt;
		ncnt[i] -= num;
		int now = ncnt[i]*2 + ncnt[i^1];
		ans = min(ans, now);
	}

	cout << ans << endl;
}

int main(void){

	int T; cin >> T;
	REP(i,T) solve();

	return 0;

}
