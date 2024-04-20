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

	string S; cin >> S;	
	reverse(S.begin(), S.end());

	ll base = 1;
	ll ans = 0;
	for(char c : S){
		ll cnt = c - 'A' + 1;
		ans += base * cnt;
		base *= 26;
	}

	cout << ans << endl;
	return 0;

}
