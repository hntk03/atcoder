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

	int N, K; cin >> N >> K;
	vector<string> S(N);
	REP(i,N) cin >> S[i];
	
	int ans = 0;
	REP(i,1<<N){
		string select = "";
		REP(j,N){
			if((i>>j)&1){
				select += S[j];
			}
		}

		map<char, int> mp;
		for(char c : select){
			mp[c]++;
		}

		int now = 0;
		for(auto [v,k] : mp){
			if(k == K) now++;
		}

		ans = max(now, ans);
	}

	cout << ans << endl;
	return 0;

}
