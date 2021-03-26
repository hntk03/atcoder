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

ll f(ll x){
	string s = to_string(x);
	return stoll(s+s);

}

int main(void){

	ll N; cin >> N;
	ll x = 1;
	while(f(x) <= N) x++;
	ll ans = x-1;
	cout << ans << endl;

	return 0;

}
