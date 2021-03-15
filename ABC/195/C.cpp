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

	ll N; cin >> N;
	string S = to_string(N);
	int p = S.length();

	ll ans = 0;
	for(int i=p;i>3;i--){
		ll x = (ll)pow(10, i-1) - 1;
		int cnt = i/3;
		ans += (N - x)*cnt;
		cout << N-x << endl;
		N -= N - x;
		cout << N << endl;
		// break;
	}

	cout << ans << endl;

	return 0;

}
