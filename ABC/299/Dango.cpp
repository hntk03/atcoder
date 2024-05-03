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
	string S; cin >> S;

	int ans = 0;
	REP(flip,2){

		int level = 0;

		REP(i,N){
			if(S[i] == '-'){
				ans = max(ans, level);
				level = 0;
			}else{
				level++;
			}
		}
		reverse(S.begin(), S.end());
	}

	if(ans) cout << ans << endl;
	else cout << -1 << endl;

	return 0;

}
