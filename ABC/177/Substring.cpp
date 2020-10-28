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

	string S, T; cin >> S >> T;

	int ans = 10000;
	REP(i,S.length() - T.length() + 1){
		int cnt = 0;
		REP(j, T.length()){
			if(S[i+j] == T[j]) cnt++;
		}
		int tmp = T.length() - cnt;
		ans = min(ans, tmp);
	}

	cout << ans << endl;

	return 0;

}
