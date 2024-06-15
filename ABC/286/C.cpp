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

int make(string s){
	int diff = 0;
	REP(i,s.length()/2){
		diff += s[i] != s[s.length() - 1 - i];
	}

	return diff;
}

int main(void){

	ll N, A, B; cin >> N >> A >> B;	
	string S; cin >> S;

	string T = S + S + S;
	int idx = (N+1)/2;
	ll ans = 1e18;
	REP(i,N){
		string X = T.substr(idx+i, N);
		ll costA = A*((idx+i)%N);
		ll costB = B*make(X);

		ans = min(ans, costA+costB);
	}

	cout << ans << endl;

	return 0;

}
