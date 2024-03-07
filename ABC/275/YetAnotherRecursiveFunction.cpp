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
map<ll, ll> mp;

ll f(ll x){
	if(mp[x] != 0L) return mp[x];

	ll ret = f(x/2) + f(x/3);
	mp[x] = ret;
	return ret;
}

int main(void){

	ll N; cin >> N;
	mp[0] = 1;

	cout << f(N) << endl;

	return 0;

}
